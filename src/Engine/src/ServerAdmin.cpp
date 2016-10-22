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

#include "ServerAdmin.hpp"
#include "Utils.hpp"
#include "AutoPtr.hpp"

#include <cstdlib>

ServerAdmin::ServerCommand ServerAdmin::server_commands[] = {
    { "op", &ServerAdmin::sc_op },
    { "deop", &ServerAdmin::sc_deop },
    { "kick", &ServerAdmin::sc_kick },
    { "ban", &ServerAdmin::sc_ban },
    { "unban", &ServerAdmin::sc_unban },
    { "next", &ServerAdmin::sc_next },
    { "map", &ServerAdmin::sc_map },
    { "reload", &ServerAdmin::sc_reload },
    { "save", &ServerAdmin::sc_save },
    { "get", &ServerAdmin::sc_get },
    { "set", &ServerAdmin::sc_set },
    { "reset", &ServerAdmin::sc_reset },
    { "vote", &ServerAdmin::sc_vote },
    { 0, 0 }
};

ServerAdmin::ServerAdmin(Resources& resources, ClientServer& client_server,
    Properties& properties)
    : resources(resources), server(client_server), properties(properties),
      admin_password(properties.get_value("admin_password")) { }

ServerAdmin::ServerAdmin(Resources& resources, ClientServer& client_server,
    Properties& properties, const std::string& admin_password)
    : resources(resources), server(client_server), properties(properties),
      admin_password(admin_password) { }

ServerAdmin::~ServerAdmin() { }

void ServerAdmin::execute(const Connection *c, Player *p, std::string cmd, std::string params)
    throw (ServerAdminException)
{
    try {
        instant_trim(cmd);
        instant_trim(params);
        cmd = lowercase(cmd);
        bool found = false;
        ServerCommand *sc = server_commands;
        while (sc->command) {
            if (!strcmp(sc->command, cmd.c_str())) {
                found = true;
                (this->*sc->function)(c, p, params);
                break;
            }
            sc++;
        }

        if (!found) {
            send_i18n_msg(c, I18N_SERVE_UNKNOWN_COMMAND, cmd.c_str());
        }
    } catch (const std::exception& e) {
        throw ServerAdminException(e.what());
    }
}

void ServerAdmin::update_configuration(const Connection *c) throw (Exception) {
    hostport_t port = atoi(properties.get_value("port").c_str());
    pico_size_t num_players = atoi(properties.get_value("num_players").c_str());
    const std::string& server_name = properties.get_value("server_name");
    const std::string& server_password = properties.get_value("server_password");
    admin_password = properties.get_value("admin_password");
    server.reload_config(port, num_players, server_name, server_password);
}

void ServerAdmin::send_i18n_msg(const Connection *c, I18NText id, const char *addon) {
    size_t msglen;
    AutoPtr<char[]> txtptr(Tournament::create_i18n_response(id, msglen, addon));
    GI18NText *txtmsg = reinterpret_cast<GI18NText *>(&txtptr[0]);
    if (c) {
        server.send_data(c, 0, GPCI18NText, NetFlagsReliable, static_cast<data_len_t>(msglen), &*txtmsg);
    } else {
        server.broadcast_data(0, GPCI18NText, NetFlagsReliable, static_cast<data_len_t>(msglen), &*txtmsg);
    }
}

void ServerAdmin::send_i18n_msg(const Connection *c, I18NText id, const std::string& p1, const std::string& p2) {
    send_i18n_msg(c, id, (p1 + "\t" + p2).c_str());
}

/* server functions */
void ServerAdmin::sc_op(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (params != admin_password) {
        send_i18n_msg(c, I18N_SERVE_WRONG_PASSWORD);
    } else if (p->server_admin) {
        send_i18n_msg(c, I18N_SERVE_ALREADY_ADMIN);
    } else {
        p->server_admin = true;
        send_i18n_msg(0, I18N_SERVE_NEW_ADMIN, p->get_player_name().c_str());
    }
}

void ServerAdmin::sc_deop(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c, p)) {
        p->server_admin = false;
        send_i18n_msg(0, I18N_SERVE_ADMIN_LEFT, p->get_player_name().c_str());
    }
}

void ServerAdmin::sc_kick(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c, p) && check_if_params(c, params)) {
        Players& players = server.get_players();
        bool found = false;
        for (Players::iterator it = players.begin(); it != players.end(); it++) {
            Player *v = *it;
            std::string pn(v->get_player_name());
            instant_trim(pn);
            if (pn == params) {
                found = true;
                if (v->get_connection() == c) {
                    send_i18n_msg(c, I18N_SERVE_KICK_YOURSELF);
                } else {
                    server.kill(v->get_connection());
                    send_i18n_msg(0, I18N_SERVE_KICK, p->get_player_name(), pn);
                }
                break;
            }
        }
        if (!found) {
            send_i18n_msg(c, I18N_SERVE_PLAYER_NOT_FOUND, params.c_str());
        }
    }
}

void ServerAdmin::sc_ban(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    send_i18n_msg(c, I18N_SERVE_NOT_IMPLEMENTED);
}

void ServerAdmin::sc_unban(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    send_i18n_msg(c, I18N_SERVE_NOT_IMPLEMENTED);
}

void ServerAdmin::sc_next(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c, p) && check_if_no_params(c, params)) {
        server.delete_tournament();
        send_i18n_msg(0, I18N_SERVE_NEXT_MAP, p->get_player_name().c_str());
    }
}

void ServerAdmin::sc_map(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c, p)) {
        StringTokens tokens = tokenize(params, ' ');
        if (tokens.size() != 3) {
            send_i18n_msg(c, I18N_SERVE_MAP_USAGE);
        } else {
            Map *map = 0;
            try {
                map = resources.get_map(tokens[0]);
            } catch (const ResourcesException& e) {
                throw ServerAdminException(e.what());
            }

            int warmup = atoi(tokens[1].c_str());
            int duration = atoi(tokens[2].c_str());

            if (warmup < 0 || warmup > 120 || duration < 1 || duration > 120) {
                send_i18n_msg(c, I18N_SERVE_ILLEGAL_PARM);
            } else {
                MapConfiguration& config = server.get_temporary_map_config();
                config.map_name = map->get_name();
                config.type = map->get_game_play_type();
                config.warmup_in_seconds = warmup;
                config.duration = duration;
                server.set_temporary_map_config(true);

                server.delete_tournament();
                send_i18n_msg(0, I18N_SERVE_MAP_LOADED, p->get_characterset_name(), config.map_name);
            }
        }
    }
}

void ServerAdmin::sc_reload(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c, p) && check_if_no_params(c, params)) {
        try {
            properties.reload_configuration();
            update_configuration(c);
            send_i18n_msg(c, I18N_SERVE_CONFIG_RELOADED);
        } catch (const Exception& e) {
            throw ServerAdminException(e.what());
        }
    }
}

void ServerAdmin::sc_save(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c, p) && check_if_no_params(c, params)) {
        try {
            properties.save_configuration();
            send_i18n_msg(c, I18N_SERVE_CONFIG_SAVED);
        } catch (const Exception& e) {
            throw ServerAdminException(e.what());
        }
    }
}

void ServerAdmin::sc_get(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c, p)) {
        StringTokens tokens = tokenize(params, ' ');
        if (tokens.size() != 1) {
            send_i18n_msg(c, I18N_SERVE_GET_USAGE);
        } else {
            const std::string& value = properties.get_value(tokens[0]);
            std::string msg(tokens[0] + "=" + value);
            server.send_data(c, 0, GPCTextMessage, NetFlagsReliable, msg.length(), msg.c_str());
        }
    }
}

void ServerAdmin::sc_set(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c, p)) {
        StringTokens tokens = tokenize(params, ' ', 2);
        if (tokens.size() != 2) {
            send_i18n_msg(c, I18N_SERVE_SET_USAGE);
        } else {
            properties.set_value(tokens[0], tokens[1]);
            update_configuration(c);
            send_i18n_msg(c, I18N_SERVE_SET_VAR_TO, tokens[0], tokens[1]);
        }
    }
}

void ServerAdmin::sc_reset(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    if (check_if_authorized(c,  p)) {
        StringTokens tokens = tokenize(params, ' ');
        if (tokens.size() != 1) {
            send_i18n_msg(c, I18N_SERVE_RESET_USAGE);
        } else {
            properties.set_value(tokens[0], "");
            send_i18n_msg(c, I18N_SERVE_VAR_CLEARED, tokens[0].c_str());
        }
    }
}

void ServerAdmin::sc_vote(const Connection *c, Player *p, const std::string& params) throw (ServerAdminException) {
    send_i18n_msg(c, I18N_SERVE_NOT_IMPLEMENTED);
}

/* helper functions */
bool ServerAdmin::check_if_authorized(const Connection *c, Player *p) throw (ServerAdminException) {
    if (!p->server_admin) {
        send_i18n_msg(c, I18N_SERVE_NOT_AUTHORIZED);
        return false;
    }

    return true;
}

bool ServerAdmin::check_if_params(const Connection *c, const std::string& params) throw (ServerAdminException) {
    if (!params.length()) {
        send_i18n_msg(c, I18N_SERVE_PARM_MISSING);
        return false;
    }

    return true;
}

bool ServerAdmin::check_if_no_params(const Connection *c, const std::string& params) throw (ServerAdminException) {
    if (params.length()) {
        send_i18n_msg(c, I18N_SERVE_NO_PARM_NEEDED);
        return false;
    }

    return true;
}
