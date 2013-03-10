# BareWM

## About

Bare WM is a fullscreen window manager aimed at those who spend their day cycling through windows instead of having 10 onscreen at a time.
It's really just a dumbed down version of Ratpoison's default behavior (all windows open in fullscreen, with no ability to resize,just to cycle through).
For people who only use GNU Screen, Firefox, and/or (g)Vim all day long, its really useful as it lets you use every free pixel of the screen.

## Shoutouts

- dimigon ( thanks for the sighandler part :) and some other coding stuff I learned after your submitted patch )
- wonder  ( thanks for the help with the PKGBUILD )
- rob|    ( thanks for the SIGALRM info )
- meth0dz ( thanks for the massive cleanup of the code! )
- moofive ( thanks for DISPLAY variable patch )

## Installation

1. Open conf.h
2. Edit settings / keys / colors
> NOTE: Valid cursor names in "/usr/include/X11/cursorfont.h", or anywhere you can find them on the internet. Defaults should be fine though.
3. Open short-info.sh
4. Edit / add commands, `chmod +x` it, put somewhere in $PATH
5. $ make
6. $ sudo make install

## Running

Just run barewm (from xinitrc, or make a session for it).

xinitrc example:
> exec xsetroot -solid "Gray50" &
> exec barewm

$ startx

## Usage

Configuration is done by modifying the conf.h file and recompiling.
The default keybindings are:
- MOD = Default is the WIN key (133).
- MOD + CMD : execute a commande
All following keys are issued when in command mode:
- c : spawn terminal (defaults to urxvt)
- w : display window list
- q : kill selected window
- m : spawn launcher menu program (by default it uses dmenu)
- p : select previous window
- n : select next window
- s : show message containing output from the command defined at as STATUS in conf.h
- l : log out

## To-do

1. Custom key bindings. Working on implementing message and spawn bindings for now. Useful if you want to set bindings to run your own scripts, for example to display system stats, using the built-in messaging system, etc...
2. Maybe (MAYBE!) splitting. Atleast a 2 frame vertical splitting would be in order if I pursue this.
3. Named virtual workspaces
4. Update for AZERTY keyboards


## Changelog

10.3.2013
           - Change key bindings behavior.
           - Add the logout command.
           - Add a command which is executed at startup.

11.3.2009
           - Honor DISPLAY variable
           - Add sample short-info.sh
           - Add `make uninstall`
           - Other stuff
29.04.2009
           - Added a status feature (outputs the result from the command defined at STATUS)
           - Added options for custom cursors (only ones found in X11/cursorfont.h)
15.10.2009
           - Wrote timeout handler, so it doesn't block when messages are displayed
           - Started doing a complete clean-up of the code, especially the color handling
16.10.2009
           - Implemented most of meth0dz' suggestions and code
           - Killing windows now selects the previous (or next, depending on the outcome
             of the previous selection) window
           - Added meth0dz's suggestion, switched to C99, thus having to mess a bit with the
             code to get it to compile, nothing serious though
           - Started work on cleaning the ugly switch/case parts that take care of the
             messaging window position
