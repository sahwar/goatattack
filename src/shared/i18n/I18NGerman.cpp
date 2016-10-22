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

#include "I18N.hpp"

const I18N::Text I18N::all_texts_german[] = {
    { I18N_BUTTON_YES, "Ja" },
    { I18N_BUTTON_NO, "Nein" },
    { I18N_BUTTON_OK, "Ok" },
    { I18N_BUTTON_CANCEL, "Abbruch" },
    { I18N_BUTTON_CLOSE, "Schliessen" },
    { I18N_BUTTON_START_SERVER, "Start Server" },
    { I18N_BUTTON_DELETE, "Löschen" },

    { I18N_MAINMENU_PLAY, "Spielen" },
    { I18N_MAINMENU_LAN, "LAN Server erstellen" },
    { I18N_MAINMENU_PACKAGES, "Geladene Pakete" },
    { I18N_MAINMENU_OPTIONS, "Optionen/Einstellungen" },
    { I18N_MAINMENU_CREDITS, "Credits" },
    { I18N_MAINMENU_QUIT, "Beenden" },
    { I18N_MAINMENU_VERSION, "Aktuelle Version: ${1}" },
    { I18N_MAINMENU_INTERNET, "Internet" },
    { I18N_MAINMENU_INTERNET_SERVERS, "Internetserver:" },
    { I18N_MAINMENU_SERVER_NAME, "Servername" },
    { I18N_MAINMENU_CONNECT, "Verbinden" },
    { I18N_MAINMENU_REFRESH, "Aktualisieren" },
    { I18N_MAINMENU_PLAYERS, "Spieler" },
    { I18N_MAINMENU_PING, "Ping" },
    { I18N_MAINMENU_LAN_TITLE, "LAN" },
    { I18N_MAINMENU_LAN_SERVERS, "LAN-Server:" },
    { I18N_MAINMENU_CUSTOM_SERVER, "Spezifischer Server" },
    { I18N_MAINMENU_ENTER_HOSTNAME, "Hostname oder IP-Adresse und Port eingeben:" },
    { I18N_MAINMENU_ADDRESS, "Adresse:" },
    { I18N_MAINMENU_PORT, "Port:" },
    { I18N_MAINMENU_PASSWORD, "Passwort:" },
    { I18N_MAINMENU_ENTER_PASSWORD, "Passwort eingeben:" },
    { I18N_MAINMENU_SERVER_NAME2, "Servername:" },
    { I18N_MAINMENU_GAME_MODE, "Spielmodus:" },
    { I18N_MAINMENU_GM_DM, "Deathmatch" },
    { I18N_MAINMENU_GM_TDM, "Team Deathmatch" },
    { I18N_MAINMENU_GM_CTF, "Capture The Flag" },
    { I18N_MAINMENU_GM_SR, "Speed Race" },
    { I18N_MAINMENU_GM_CTC, "Catch The Coin" },
    { I18N_MAINMENU_GM_GOH, "Goat Of The Hill" },
    { I18N_MAINMENU_MAX_PLAYERS, "Max. Spieler:" },
    { I18N_MAINMENU_WARMUP, "Einlaufzeit:" },
    { I18N_MAINMENU_DURATION, "Spieldauer:" },
    { I18N_MAINMENU_IN_SECONDS, "(in Sekunden)" },
    { I18N_MAINMENU_IN_MINUTES, "(in Minuten)" },
    { I18N_MAINMENU_SELECT_MAP, "Karte auswählen:" },
    { I18N_MAINMENU_INVALID_SERVERNAME, "Bitte gültigen Servername eingeben." },
    { I18N_MAINMENU_MAX_PLAYERS_TITLE, "Max. Spieler" },
    { I18N_MAINMENU_INVALID_GENERIC_NUMBER, "Bitte gültige Zahl eingeben. (${1})" },
    { I18N_MAINMENU_DURATION2, "Spieldauer" },
    { I18N_MAINMENU_WARMUP2, "Einlaufzeit" },
    { I18N_MAINMENU_SELECT_MAP2, "Karte auswählen" },
    { I18N_MAINMENU_SELECT_MAP3, "Bitte Karte auswählen." },
    { I18N_MAINMENU_PACKAGE, "Paket" },
    { I18N_MAINMENU_HASH, "Hash" },
    { I18N_MAINMENU_CREDITS_CODE, "Code:" },
    { I18N_MAINMENU_CREDITS_GFX, "Grafiken:" },
    { I18N_MAINMENU_CREDITS_MAPS, "Karten:" },
    { I18N_MAINMENU_CREDITS_MUSIC, "Musik:" },
    { I18N_MAINMENU_CREDITS_THANKS, "Danke auch an:" },
    { I18N_MAINMENU_FREDERIC, "und natürlich Frederic die Ziege" },

    { I18N_OPTIONS_PLAYER, "Spieler" },
    { I18N_OPTIONS_GRAPHICS_AND_SOUND, "Grafik und Ton" },
    { I18N_OPTIONS_CONTROLLER, "Controller und Tastatur" },
    { I18N_OPTIONS_SPECTATE, "Zuschauen" },
    { I18N_OPTIONS_SKIP_SONG, "Nächster Song" },
    { I18N_OPTIONS_RETURN, "Zurück zum Hauptmenü" },
    { I18N_OPTIONS_SETTINGS11, "Spielername:" },
    { I18N_OPTIONS_SETTINGS12, "Spielername anzeigen" },
    { I18N_OPTIONS_SETTINGS13, "Charakter:" },
    { I18N_OPTIONS_SETTINGS21, "Vollbild Grafikmodus" },
    { I18N_OPTIONS_SETTINGS22, "Scanlines zeichnen" },
    { I18N_OPTIONS_SETTINGS23, "Intensität:" },
    { I18N_OPTIONS_SETTINGS24, "Musik Lautstärke:" },
    { I18N_OPTIONS_SETTINGS25, "SFX Lautstärke:" },
    { I18N_OPTIONS_SETTINGS26, "Tempo Textfading:" },
    { I18N_OPTIONS_SETTINGS31, "rauf:" },
    { I18N_OPTIONS_SETTINGS32, "runter:" },
    { I18N_OPTIONS_SETTINGS33, "links:" },
    { I18N_OPTIONS_SETTINGS34, "rechts:" },
    { I18N_OPTIONS_SETTINGS35, "springen:" },
    { I18N_OPTIONS_SETTINGS36, "feuern:" },
    { I18N_OPTIONS_SETTINGS37, "Granate:" },
    { I18N_OPTIONS_SETTINGS38, "Bombe:" },
    { I18N_OPTIONS_SETTINGS39, "Frosch:" },
    { I18N_OPTIONS_SETTINGS40, "Chat:" },
    { I18N_OPTIONS_SETTINGS41, "Stats:" },
    { I18N_OPTIONS_SETTINGS42, "Escape:" },
    { I18N_OPTIONS_SETTINGS43, "Horiz. Gamepad Totzone:" },
    { I18N_OPTIONS_SETTINGS44, "Vert. Gamepad Totzone:" },
    { I18N_OPTIONS_SETTINGS45, "Joysticks suchen" },
    { I18N_OPTIONS_SETTINGS46, "Abfrage" },
    { I18N_OPTIONS_SETTINGS47, "Taste drücken oder Joystick benützen..." },
    { I18N_OPTIONS_SETTINGS48, "${1} Joystick(s) gefunden." },
    { I18N_OPTIONS_SETTINGS49, "Joysticks" },
    { I18N_OPTIONS_SETTINGS50, "[kein]" },
    { I18N_OPTIONS_SETTINGS51, "Taste: ${1}" },

    { I18N_CLIENT_TRANSFER, "transferiere ${1} (${2}%)" },
    { I18N_CLIENT_ENTER_MSG, "Nachricht eingeben" },
    { I18N_CLIENT_CONNECTING_TO1, "Verbinde zu ${1}, Ping = ${2}" },
    { I18N_CLIENT_CONNECTING_TO2, ", passwortgeschützt" },
    { I18N_CLIENT_CONNECTING_TO3, "(Spieler: ${1}/${2})" },
    { I18N_CLIENT_LOGGED_IN, "Du bist eingeloggt" },
    { I18N_CLIENT_LOGGED_OUT, "Du wurdest ausgeloggt." },
    { I18N_CLIENT_PING_TIMEOUT, "Du wurdest ausgeloggt. (Ping Timeout)" },
    { I18N_CLIENT_TOO_MANY_RESENDS, "Du wurdest ausgeloggt. (zu viele Sendeversuche)" },
    { I18N_CLIENT_APPLICATION_LAYER, "Du wurdest ausgeloggt. (Quit durch Applikationsschicht)" },
    { I18N_CLIENT_SERVER_MESSAGE, "Servernachricht" },
    { I18N_CLIENT_MAP_INFO, "Karte: ${1}" },
    { I18N_CLIENT_JOIN_REFUSED, "ANFRAGE ZUM BEITRETEN WURDE ABGELEHNT" },
    { I18N_CLIENT_FRIENDLY_FIRE, "TEAMBESCHUSS: PASS AUF!!!" },
    { I18N_CLIENT_UNBALANCED, "SPIEL IST UNAUSGEWOGEN" },
    { I18N_CLIENT_WARMUP, "aufwärmen bitte" },
    { I18N_CLIENT_GAME_BEGINS, "Spiel beginnt" },
    { I18N_CLIENT_GAME_OVER, "SPIEL BEENDET" },
    { I18N_CLIENT_RENAME, "${1} heisst jetzt ${2}" },
    { I18N_CLIENT_SKIN_CHANGE, "${1} hat seinen Avatar nach ${2} gewechselt" },

    { I18N_TNMT_NEW_MAP_LOADED, "neue Karte geladen" },
    { I18N_TNMT_SPECTATING, "ZUSCHAUEN" },
    { I18N_TNMT_WARMUP, "AUFWÄRMEN" },
    { I18N_TNMT_SB_CTC_TITLE, "CATCH THE COIN" },
    { I18N_TNMT_SB_PLAYER, "SPIELER" },
    { I18N_TNMT_SB_TOTAL, "TOTAL" },
    { I18N_TNMT_SB_PING, "PING" },
    { I18N_TNMT_SB_SPECTATORS, "ZUSCHAUER:" },
    { I18N_TNMT_SB_DM_TITLE, "DEATHMATCH" },
    { I18N_TNMT_SB_FRAGS, "FRAGS" },
    { I18N_TNMT_SB_KILLS, "KILLS" },
    { I18N_TNMT_SB_SCORE, "PKTE" },
    { I18N_TNMT_SB_SR_TITLE, "SPEED RACE" },
    { I18N_TNMT_SB_LAPS, "RUNDEN" },
    { I18N_TNMT_SB_BEST, "BEST" },
    { I18N_TNMT_SB_LAST, "LETZT" },
    { I18N_TNMT_SR_LEAD, "Spitze:" },
    { I18N_TNMT_SR_LAP, "Runde:" },
    { I18N_TNMT_SR_BEST, "Best:" },
    { I18N_TNMT_SR_LAST, "Letzt:" },
    { I18N_TNMT_SR_NA, "N/A" },
    { I18N_TNMT_PLAYER_JOINS, "${1} tritt dem Spiel bei" },
    { I18N_TNMT_PLAYER_FELL_OFF, "${1} ist von der Bühne gefallen" },
    { I18N_TNMT_PLAYER_SUICIDE, "${1} hat Selbstmord begangen" },
    { I18N_TNMT_COIN_RETURNED, "Die Münze ist zur Basis zurückgekehrt" },
    { I18N_TNMT_COIN_CATCHED, "${1} schnappt sich die Münze" },
    { I18N_TNMT_COIN_DROPPED, "Die Münze wurde fallengelassen" },
    { I18N_TNMT_RED_FLAG_RETURNED, "Die rote Flag ist zur Basis zurückgekehrt" },
    { I18N_TNMT_BLUE_FLAG_RETURNED, "Die blaue Flag ist zur Basis zurückgekehrt" },
    { I18N_TNMT_RED_FLAG_CATCHED, "${1} schnappt sich die rote Flagge" },
    { I18N_TNMT_BLUE_FLAG_CATCHED, "${1} schnappt sich die blaue Flagge" },
    { I18N_TNMT_RED_FLAG_SAVED, "Die rote Flagge wurde durch ${1} zurückgebracht" },
    { I18N_TNMT_BLUE_FLAG_SAVED, "Die blue Flagge wurde durch ${1} zurückgebracht" },
    { I18N_TNMT_RED_FLAG_DROPPED, "Die rote Flagge wurde fallengelassen" },
    { I18N_TNMT_BLUE_FLAG_DROPPED, "Die blaue Flagge wurde fallengelassen" },
    { I18N_TNMT_TEAM_RED_SCORED1, "Team rot punktet" },
    { I18N_TNMT_TEAM_BLUE_SCORED1, "Team blau punktet" },
    { I18N_TNMT_TEAM_RED_SCORED2, "TEAM ROT PUNKTET" },
    { I18N_TNMT_TEAM_BLUE_SCORED2, "TEAM BLAU PUNKTET" },
    { I18N_TNMT_SR_RECORD, "Neue Bestzeit von ${1}: ${2}" },
    { I18N_TNMT_SR_COMPLETE, "Runde fertig" },
    { I18N_TNMT_KILLED1, "${1} tötet ${2}" },
    { I18N_TNMT_KILLED2, "${1} bringt sich selber um" },
    { I18N_TNMT_FROGGED1, "${1} jagt ${2} in die Luft" },
    { I18N_TNMT_FROGGED2, "${1} jagt sich selber in die Luft" },

    { I18N_TNMT_STATS_TEAM, "Teamstatistik" },
    { I18N_TNMT_STATS_PLAYER, "Spielerstatistik" },
    { I18N_TNMT_STATS_OVER, "Spiel beendet" },
    { I18N_TNMT_STATS_END, "Statistikende" },
    { I18N_TNMT_STATS_MAP_CLOSED, "aktuelle Karte geschlossen" },

    { I18N_TNMT_SELECT_TEAM1, "Wähle mit rauf und runter, mit Feuer ok." },
    { I18N_TNMT_SELECT_TEAM2, "Team auswählen" },
    { I18N_TNMT_JOIN_RED_TEAM, "${1} tritt dem roten Team bei" },
    { I18N_TNMT_JOIN_BLUE_TEAM, "${1} tritt dem blauen Team bei" },

    { I18N_TNMT_TEAM_RED_CAP, "TEAM ROT" },
    { I18N_TNMT_TEAM_BLUE_CAP, "TEAM BLAU" },

    { I18N_SERVE_WARM_UP, "aufwärmen" },
    { I18N_SERVE_GAME_BEGINS, "Spiel beginnt" },
    { I18N_SERVE_CONNECT, "${1} verbunden" },
    { I18N_SERVE_RECONNECT, "${1} wieder verbunden" },
    { I18N_SERVE_SPECTATING, "${1} schaut jetzt zu" },
    { I18N_SERVE_UNKNOWN_COMMAND, "Unbekannter Serverbefehl: ${1}" },
    { I18N_SERVE_WRONG_PASSWORD, "Falsches Admin-Passwort" },
    { I18N_SERVE_ALREADY_ADMIN, "Du bist bereits Admin" },
    { I18N_SERVE_NEW_ADMIN, "${1} ist jetzt Serveradmin" },
    { I18N_SERVE_ADMIN_LEFT, "${1} hat den Adminmodus verlassen" },
    { I18N_SERVE_KICK_YOURSELF, "Du kannst dich nicht selber rausschmeissen" },
    { I18N_SERVE_PLAYER_NOT_FOUND, "Spieler nicht gefunden: ${1}" },
    { I18N_SERVE_NOT_AUTHORIZED, "Du bist nicht berechtigt, das zu tun" },
    { I18N_SERVE_KICK, "${1} hat ${2} rausworfen" },
    { I18N_SERVE_NOT_IMPLEMENTED, "Noch nicht implementiert" },
    { I18N_SERVE_NEXT_MAP, "${1} hat die nächste Karte geladen" },
    { I18N_SERVE_MAP_USAGE, "Verwendung: /map <map_name> <warmup> <dauer>" },
    { I18N_SERVE_MAP_LOADED, "${1} hat die Karte ${2} geladen" },
    { I18N_SERVE_CONFIG_RELOADED, "Konfigurationsdatei neu eingelesen" },
    { I18N_SERVE_CONFIG_SAVED, "Konfigurationsdatei gesichert" },
    { I18N_SERVE_GET_USAGE, "Verwendung: /get <variable>" },
    { I18N_SERVE_SET_USAGE, "Verwendung: /set <variable> <wert>" },
    { I18N_SERVE_SET_VAR_TO, "setze ${1} auf ${2}" },
    { I18N_SERVE_RESET_USAGE, "Verwendung: /reset <variable>" },
    { I18N_SERVE_VAR_CLEARED, "${1} gelöscht" },
    { I18N_SERVE_PARM_MISSING, "fehlende Parameter" },
    { I18N_SERVE_NO_PARM_NEEDED, "Keine Parameter benötigt" },
    { I18N_SERVE_ILLEGAL_PARM, "Illegale Parameter" },

    { I18N_TNMT_LOGOUT_MSG01, "ich mach mich mal vom Acker" },
    { I18N_TNMT_LOGOUT_MSG02, "in Rauch aufgegangen" },
    { I18N_TNMT_LOGOUT_MSG03, "ich verschwinde mal" },
    { I18N_TNMT_LOGOUT_MSG04, "nebulöses Auflösen" },
    { I18N_TNMT_LOGOUT_MSG05, "über der Jordan gegangen" },
    { I18N_TNMT_LOGOUT_MSG06, "ins Gras gebissen" },
    { I18N_TNMT_LOGOUT_MSG07, "tschüss..." },
    { I18N_TNMT_LOGOUT_MSG08, "ich hau ab!" },
    { I18N_TNMT_LOGOUT_MSG09, "ich mach mal die Fliege" },
    { I18N_TNMT_LOGOUT_MSG10, "ein französischer Abgang" },
    { I18N_TNMT_LOGOUT_MSG11, "Ich habe die blaue Pille genommen" },
    { I18N_TNMT_LOGOUT_MSG12, "" },

    { I18N_VERSION_MISMATCH_TITLE, "Versionsfehler" },
    { I18N_VERSION_MISMATCH_MESSAGE, "Die beiden Protokoll passen nicht. Du kannst nicht zu diesem Server verbinden." },
    { I18N_SERVER_TITLE, "Server" },
    { I18N_SELECT_SERVER, "Bitte einen Server auswählen." },
    { I18N_ERROR_TITLE, "Fehler" },
    { I18N_PORT_TITLE, "Port" },
    { I18N_SERVER_UNKNOWN, "Server unbekannt oder nicht gefunden." },
    { I18N_INVALID_PORT, "Gültige Portnummer eingeben." },
    { I18N_WRONG_MAPTYPE, "Falscher Kartentyp" },
    { I18N_WRONG_MAPTYPE2, "Dieser Kartentyp kann nicht in diesem Modus gespielt werden." },
    { I18N_SERVER_FULL, "Login fehlgeschlagen: Server ist voll." },
    { I18N_WRONG_PASSWORD, "Login fehlgeschlagen: falsches Passwort." },
    { I18N_XFER_OPEN_FAILED, "WARNUNG: kann Datei nicht öffnen: ${1}" },
    { I18N_XFER_ALREADY_OPEN, "WARNUNG: kann ${1} nicht empfangen. Diese Datei ist bereits geöffnet." },
    { I18N_THREAD_FAILED, "Starten des Threads fehlgeschlagen." },
    { I18N_HEAP_CHANGE_ERROR, "Kann num_heaps nicht auf ${1} setzen, da ${2} eingeloggt sind." },
    { I18N_SERVER_TOO_OLD, "---[ Server zu alt ]---" },
    { I18N_ANIMATION_FAILED, "Animation erstellen fehlgeschlagen: ${1}" },
    { I18N_MISSING_SPAWN_POINTS, "Es fehlen Spawnpunkte in dieser Karte." },
    { I18N_MULTIPLE_COINS, "Es ist nur eine Münze zugelassen." },
    { I18N_COIN_MISSING, "Die Münze fehlt in dieser Karte." },
    { I18N_MULTIPLE_RED_FLAGS, "Es sit nur eine rote Flagge zugelassen." },
    { I18N_MULTIPLE_BLUE_FLAGS, "Es sit nur eine blaue Flagge zugelassen." },
    { I18N_RED_FLAG_MISSING, "Die rote Flagge fehlt in dieser Karte." },
    { I18N_BLUE_FLAG_MISSING, "Die blaue Flagge fehlt in dieser Karte." },
    { I18N_WHY_MORE_SPAWN_POINTS, "Warum mehrere Spawnpunkte in dieser Karte?" },
    { I18N_RED_SPAWNPOINTS_MISSING, "Keine Spawnpunkte für Team Rot in dieser Karte gefunden." },
    { I18N_BLUE_SPAWNPOINTS_MISSING, "Keine Spawnpunkte für Team Blau in dieser Karte gefunden." },
    { I18N_DIFFERENT_HASH, "Haupt-Pak '${1}' hat einen anderen Hashwert." },
    { I18N_NO_MAPS_DEFINED, "Keine Karten in Konfigurationsdatei definiert." },
    { I18N_NO_DEDICATED_SERVER, "Das ist kein dedizierter Server." },
    { I18N_MUSIC_INFO1, "Musik: ${1}" },
    { I18N_MUSIC_INFO2, "Musik: ${1} von ${2}" },
    { I18N_MUSIC_TOO_FAST, "FEHLER: ${1} spielte zu schnell ab, gestoppt." },
    { I18N_NO_MUSIC_FOUND, "FEHLER: keine Musik gefunden." },
    { I18N_ENTER_VALID_VALUE, "Gültige Werte eingeben (${1})" },
    { I18N_NO_PARENT, "Kein Parent spezifiziert" },
    { I18N_NO_FONT, "Keine Schriftart deklariert" },

    { I18N_ME_RADIUS, "Radius" },
    { I18N_ME_RED, "Rot" },
    { I18N_ME_GREEN, "Grün" },
    { I18N_ME_BLUE, "Blau" },
    { I18N_ME_NAME, "Name" },
    { I18N_ME_FROG_SPAWN, "Frosch Spawn" },
    { I18N_ME_AUTHOR, "Author" },
    { I18N_ME_DESCRIPTION, "Beschreibung" },
    { I18N_ME_WIDTH, "Breite" },
    { I18N_ME_WIDTH_EVEN, "Die Breite muss geradzahlig sein." },
    { I18N_ME_HEIGHT, "Höhe" },
    { I18N_ME_PARALLAX_SHIFT, "Parallaxenverschiebung" },
    { I18N_ME_TILESET, "Tileset" },
    { I18N_ME_TILESET_SELECT, "Tileset auswählen." },
    { I18N_ME_BACKGROUND, "Hintergrund" },
    { I18N_ME_BACKGROUND_SELECT, "Hintergrund auswählen." },
    { I18N_ME_UNSAVED_MAP, "Karte verändert" },
    { I18N_ME_REALLY_CONTINUE, "Änderungen sind noch nicht gespeichert. Trotzdem fortfahren?" },
    { I18N_ME_TOOL, "Tool" },
    { I18N_ME_MODE_SELECTOR, "Modusselektor" },
    { I18N_ME_CENTER_MAP, "Karte zentrieren" },
    { I18N_ME_MAP_PROPERTIES, "Karteneingeschaften" },
    { I18N_ME_LOAD_MAP, "Karte laden" },
    { I18N_ME_SAVE_MAP, "Karte speichern" },
    { I18N_ME_TILE_SELECTOR, "Tileselektor öffnen" },
    { I18N_ME_OBJECT_SELECTOR, "Objektselektor öffnen" },
    { I18N_ME_HORZ_COPY, "Horizontal kopieren" },
    { I18N_ME_QUICK_LIGHTMAP, "Schnell Lichtkarte erstellen" },
    { I18N_ME_PIXEL_LIGHTMAP, "Präzise Lichtkarte erstellen" },
    { I18N_ME_MAP_PACKAGE, "Kartenpaket erstellen" },
    { I18N_ME_ZAP, "Karte löschen" },
    { I18N_ME_OPTIONS, "Karteneditoreneinstellungen" },
    { I18N_ME_QUIT, "Karteneditor beenden" },
    { I18N_ME_COMPILING, "Bitte warten... ${1}%" },
    { I18N_ME_MODIFIED, "modifiziert" },
    { I18N_ME_COMPILING2, "Rechne" },
    { I18N_ME_LIGHT_SRC, "Lichtquellen" },
    { I18N_ME_NO_LIGHT_SRC, "Keine Lichtquellen in dieser Karte gefunden." },
    { I18N_ME_MAP_NAME, "Kein Kartenname" },
    { I18N_ME_NO_TILESET1, "Kein Tileset" },
    { I18N_ME_NO_TILESET2, "Bitte Tileset in den Eingeschaften auswählen." },
    { I18N_ME_LIGHT_MAP, "Lichtkarte" },
    { I18N_ME_SAVING_FAILED, "Speicherung fehlgeschlagen: ${1}" },
    { I18N_ME_MODE_TILE, "TILE" },
    { I18N_ME_MODE_OBJECT, "OBJEKT" },
    { I18N_ME_MODE_LIGHT, "LICHT" },
    { I18N_ME_MODE_EDIT_LIGHT, "LICHT EDITIEREN" },
    { I18N_ME_MIRRORING, "spiegeln" },
    { I18N_ME_DECORATION, "dekorieren" },
    { I18N_ME_NO_DEC, "KEINE DEKORATION" },
    { I18N_ME_NO_LGTMP, "KEINE LICHTKARTE" },
    { I18N_ME_NO_MP, "KEINE KARTE" },
    { I18N_ME_NO_OBJ, "KEINE OBJEKTE" },
    { I18N_ME_NO_LGT, "KEIN LICHT" },
    { I18N_ME_LOAD_MAP_TITLE, "Karte laden" },
    { I18N_ME_ERROR_TITLE, "Fehler" },
    { I18N_ME_NO_SELECTION, "Keine Auswahl" },
    { I18N_ME_SELECT_MAP, "Bitte eine Karte auswählen." },

    { I18N_NONE, 0 }
};
