#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0000
#define MANUFACTURER    Nick Kallen
#define PRODUCT         nkultra
#define DESCRIPTION     A spacemouse macropad
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, F0, F4, B6, D7 }
#define MATRIX_COL_PINS { D4, D6, B4, B5, C6, C7, D5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#define BACKLIGHT_LEVELS 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLED_NUM 0

#define ENCODERS_PAD_A { F7 }
#define ENCODERS_PAD_B { F6 }

#define ENCODER_RESOLUTION 2
