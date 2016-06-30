PrizmIRC
========

This is some sort of attempt of writing an IRC client on the Casio PRIZM using the serial port and a lightweight TCP/IP stack, because why not.

You'd plug your PRIZM on a TTL converter, such as an Arduino Uno with the Atmega chip removed, and you'd initiate a SLIP connection (or even better, PPPoS?) over the serial port, and there you go, Internet.

With a TCP/IP stack on the Casio Prizm, the sky will be the limit. Many applications could be created using it, maybe even an add-in download manager or even a web browser if possible.

Right now, I started a mockup of the UI, but unfortunately, my device bricked soon after I started the project. (Thanks gbl08ma for the diagnostic, hope you'll figure out what caused it!) I intended to open-source the code once I had something working, but since I can no longer work on it, I'm open-sourcing what I have in hopes it will be useful to someone, or someone else continues it.

Building
--------
You'll want a copy of [gbl08ma's fork of libfxcg](https://github.com/gbl08ma/libfxcg) and a working gcc and binutils (if you use Arch Linux, I uploaded working versions of them in the AUR, check [sh3eb-elf-binutils](https://aur.archlinux.org/packages/sh3eb-elf-binutils) and [sh3eb-elf-gcc](https://aur.archlinux.org/packages/sh3eb-elf-gcc)). You'll also want [mkg3a](https://bitbucket.org/tari/mkg3a) (it's also in the [AUR](https://aur.archlinux.org/packages/mkg3a)).

Make a subdirectory in your libfxcg clone (after having built it of course, you might have to edit a few Makefiles) and clone this project there, cd to there and type `make` (again, you might have to edit the Makefile), and there you go, something that works.

Have fun ^_^
