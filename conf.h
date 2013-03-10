#ifndef CONF_H
#define CONF_H

#define VERSION 	"0.4.9" // Bare WM version.
#define DISPLAY		":0" // Which display to use.
#define CURSOR		XC_left_ptr // Default cursor, overrides any custom cursors you may have defined outside the WM, i.e. in xinitrc.
#define MOD_MASK 	133 // Modifier key.
#define KEY_WINLIST	'w' // Key to show window list.
#define KEY_TERMINAL 'c' // Key to spawn terminal.
#define KEY_KILL	'q' // Key to kill selected window.
#define KEY_QUIT	'l' // Key to logout.
#define KEY_MENU 	'm' // Key to spawn menu.
#define KEY_PREV	'p' // Select previous window in list.
#define KEY_NEXT	'n' // Select next window in list.
#define KEY_STATUS	's' // Show message containing output from the command defined at STATUS.
#define TERMINAL	"urxvt" // Terminal.
#define MENU		"`dmenu_path | dmenu -fn 'default' -nb '#000000' -nf '#FFFFFF' -sf '#ffffff' -sb '#000000'`" // Launcher menu to run.
#define FONT		"default" // Font to use.
#define BORDER		0 // Border size for window lists / input box.
#define FGCOLOR		"#FFFFFF" // Window list and messaging foreground color.
#define BGCOLOR		"#000000" // Window list and messaging background color.
#define SELFGCOLOR	"#000000" // Window list foreground for selected window.
#define SELBGCOLOR	"#FFFFFF" // Window list background for selected window.
#define PADDING_NORTH	0 // Top screen edge unmanaged pixels.
#define PADDING_WEST	0 // Left screen edge unmanaged pixels.
#define PADDING_SOUTH	0 // Bottom screen edge unmanaged pixels.
#define PADDING_EAST	0 // Right screen edge unmanaged pixels.
#define WLISTPADDING	5 // Left and right space in window list.
#define WLISTPOS	4 // 0 = NW, 1 = NE, 2 = SE, 3 = SW, 4 = C
#define TIMEOUT		4 // Timeout.
#define STATUS		"short-info.sh" // Command whose output is shown when you hit KEY_STATUS.
#define STARTUP 	"rainbow" // Command which is run at startup

#endif