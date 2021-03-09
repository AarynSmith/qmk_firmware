/* Copyright 2021 Aaryn Smith

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B1D
#define PRODUCT_ID      0xC0DE
#define DEVICE_VER      0x0001
#define MANUFACTURER    Handmade
#define PRODUCT         4x12alt

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 8

/* pro_micro pin-out */
//                         2   3   4   5   6   7
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7, E6 }
//                        RXI, A3, A2, A1, A0, 15, 14, 16
#define MATRIX_COL_PINS {  D2, F4, F5, F6, F7, B1, B3, B2}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
