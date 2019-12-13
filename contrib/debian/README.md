
Debian
====================
This directory contains files used to package zefird/zefir-qt
for Debian-based Linux systems. If you compile zefird/zefir-qt yourself, there are some useful files here.

## zefir: URI support ##


zefir-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install zefir-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your zefirqt binary to `/usr/bin`
and the `../../share/pixmaps/zefir128.png` to `/usr/share/pixmaps`

zefir-qt.protocol (KDE)

