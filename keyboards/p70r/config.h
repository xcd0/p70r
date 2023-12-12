// Copyright 2023 xcd0 (@xcd0)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// via
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define SPLIT_POINTING_ENABLE

//#define SPLIT_HAND_PIN D3

#define MATRIX_COL 7
#define MATRIX_ROWS 12

// encoder
//#define ENCODERS_PAD_A { D1, D0 }
//#define ENCODERS_PAD_B { D4, F4 }
//
//#define ENCODERS_PAD_A_RIGHT { D1, D0 }
//#define ENCODERS_PAD_B_RIGHT { D4, F4 }

#define MOUSEKEY_MOVE_DELTA 32 // default : 8


//#define SOFT_SERIAL_PIN D2
#define SERIAL_DEBUG

#define SELECT_SOFT_SERIAL_SPEED 3
