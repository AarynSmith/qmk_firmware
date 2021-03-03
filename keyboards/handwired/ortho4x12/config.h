#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0xBEEF
#define DEVICE_VER      0x0001
#define MANUFACTURER    Handmade
#define PRODUCT         4x12

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* pro_micro pin-out */
#define MATRIX_ROW_PINS { D1, D0, D4, C6 }
#define MATRIX_COL_PINS { D7, E6, B4, B5, B6, B2, B3, B1, F7, F6, F5, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
