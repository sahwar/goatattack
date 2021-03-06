/*
 *  This file is part of Goat Attack.
 *
 *  Goat Attack is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Goat Attack is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Goat Attack.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef DEDICATED_SERVER
    #include "SubsystemNull.hpp"
#else
    #include "SubsystemSDL.hpp"
#endif

#include "Utils.hpp"
#include "Game.hpp"
#include "Globals.hpp"
#include "Timing.hpp"
#include "I18N.hpp"
#include "PathManager.hpp"

#ifdef __APPLE__
#include "CoreFoundation/CoreFoundation.h"
#endif

#include <cstdio>
#include <cstdlib>

int main(int argc, char *argv[]) {
    std::ostream& stream = std::cout;
    const char *parm = (argc > 1 ? argv[1] : 0);

    stream << "Goat Attack " << GameVersion << std::endl;

    try {
        init_hpet();
        start_net();
        std::srand(static_cast<unsigned int>(time(0)));
        PathManager pm(ApplicationName);
        Configuration config(pm, ConfigFilename);
        I18N i18n(stream, static_cast<I18N::Language>(config.get_int("language")));

#ifdef DEDICATED_SERVER
        SubsystemNull subsystem(stream, i18n, i18n(I18N_WINTITLE_GAME));
#else
        SubsystemSDL subsystem(stream, i18n, i18n(I18N_WINTITLE_GAME), config.get_bool("shading_pipeline"));
#endif

#ifdef __APPLE__
        CFBundleRef mainBundle = CFBundleGetMainBundle();
        CFURLRef resourcesURL = CFBundleCopyResourcesDirectoryURL(mainBundle);
        char path[PATH_MAX];
        if (!CFURLGetFileSystemRepresentation(resourcesURL, TRUE, (UInt8 *)path, PATH_MAX))
        {
            throw Exception("Cannot get bundle path");
        }
        CFRelease(resourcesURL);
        std::string data_directory(path);
        Resources resources(subsystem, pm, data_directory);
#else
# ifdef DEDICATED_SERVER
        const char *data_directory = STRINGIZE_VALUE_OF(DATA_DIRECTORY);
# else
        const char *data_directory = (parm ? parm : STRINGIZE_VALUE_OF(DATA_DIRECTORY));
# endif
        Resources resources(subsystem, pm, data_directory, false, true);
#endif
        Game game(resources, subsystem, config);
        game.run(parm ? parm : "");
    } catch (const ResourcesMissingException& e) {
        stream << std::endl << "ERROR: ";
#ifdef DEDICATED_SERVER
        stream << e.what() << std::endl;
#else
        stream << e.what() << std::endl;
        stream << "Ensure that you can add a data folder as parameter." << std::endl;
        stream << "Example: " << argv[0] << " path/to/your/data/folder" << std::endl;
#endif
    } catch (const Exception& e) {
        stream << std::endl << "ERROR: ";
        stream << e.what() << std::endl;
    }
    stop_net();

    stream << "\nbye bye... :)" << std::endl;

    return 0;
}
