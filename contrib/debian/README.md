
Debian
====================
This directory contains files used to package lynxd/lynx-qt
for Debian-based Linux systems. If you compile lynxd/lynx-qt yourself, there are some useful files here.

## lynx: URI support ##


lynx-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lynx-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lynx-qt binary to `/usr/bin`
and the `../../share/pixmaps/lynx128.png` to `/usr/share/pixmaps`

lynx-qt.protocol (KDE)

