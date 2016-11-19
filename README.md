# Goat Attack

[![Travis](https://img.shields.io/travis/goatattack/goatattack.svg)](https://travis-ci.org/goatattack/goatattack)
![license](https://img.shields.io/github/license/goatattack/goatattack.svg)(https://github.com/goatattack/goatattack/blob/next/COPYING)

![alt tag](https://raw.githubusercontent.com/goatattack/goatattack/master/pictures/goatattack1.png)

## Goat Attack is a fast-paced multiplayer pixel art shooter game.
Goat Attack is a multiplayer 2D platformer pixel art shooter game for Linux, OS X and Windows. You can play it in a local network or over the Internet. This project is splitted into three subprojects. The game itself, its map editor and a master server. Six gameplay modes are supported. deathmatch, team deathmatch, capture the flag, speed race, catch the coin and goat of the hill.

The game and the map editor can be compiled for all three platforms. The master server is for linux only. The master server is a dedicated server responsible for collecting the connection information (IP address and port) of all available game servers and providing that to the users.

## Features
### Game Play
Play in free for all or in team modes. Pick up grenades, bombs and throw them. Be aware not killing yourself. In some maps, you will find a frog. Pick it up und throw it against your opponents, but do not touch it. If you find a helmet, wear it. This helmet will protect you from damage.

### Network
Create your own dedicated game server. Read carefully the configuration help in the forum. If your server has own map packages, a connecting client will download these packages automatically.

### Map editor
Create your own maps based on existing or created tilesets. If done, create a Goat Attack package and publish it with your own dedicated server.

### Logging
Your dedicated server will create detailed log entries depending on each action. These log files can be easily used to create game play statistics and reports.

## Build client
### Requires
* **Debian/Ubuntu** build-essential autoconf libtool git libsdl2-dev libsdl2-mixer-dev libpng12-dev libfreetype6-dev
* **Archlinux** sdl2 sdl2_mixer libpng freetype2 git

### Installation
1. Clone the repo `git clone https://github.com/goatattack/goatattack`
2. `cd goatattack`
2. `autoreconf -i`
3. `./configure` with map-editor: `./configure --enable-map-editor` (for music, add: `--enable-non-free-pak`)
4. `make`
5. `make install`

## Build server
### Requires
* **Debian/Ubuntu** build-essential libpng12-dev libfreetype6-dev
* **Archlinux** libpng freetype2

### Installation
1. Clone the repo `git clone https://github.com/goatattack/goatattack`
2. `cd goatattack`
2. `autoreconf -i`
3. `./configure --enable-dedicated-server`
4. `make`
5. `make install`

## OSX and Windows submodules
If you want to checkout these submodules, do this:
`$ git submodule update --init`

## Visit the forum
If you have any question, visit the [Goat Attack forum](http://forum.goatattack.net).
