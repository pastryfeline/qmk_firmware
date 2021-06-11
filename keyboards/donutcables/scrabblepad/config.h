/*
Copyright 2021 DonutCables <contact@donutcables.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define VENDOR_ID       0x4443
#define PRODUCT_ID      0x21D7
#define DEVICE_VER      0x0100
#define MANUFACTURER    DonutCables
#define PRODUCT         ScrabblePad

#define MATRIX_ROWS 15
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { D5, F1, C7, F2, C6, F3, C5, F4, C4, F5, C3, F6, C2, F7, C1 }
#define MATRIX_COL_PINS { D6, D7, E0, E1, B7, D2, D3, D4, C0, B4, B5, B6, F0, E6, E7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
