// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "quantum.h"
#include "keymap_japanese.h"
#include "p70r.h"

// #define JP_SCLN KC_SCLN // ;
// #define JP_COLN KC_QUOT // :
// #define JP_AT   KC_LBRC // @
// #define JP_LBRC KC_RBRC // [
// #define JP_RBRC KC_NUHS // ]
// #define JP_LPRN S(JP_8)    // (
// #define JP_RPRN S(JP_9)    // )
// #define JP_LCBR S(JP_LBRC) // {
// #define JP_RCBR S(JP_RBRC) // }
// #define JP_EQL  S(JP_MINS) // =
// #define JP_TILD S(JP_CIRC) // ~
// #define JP_PIPE S(JP_YEN)  // |
// #define JP_GRV  S(JP_AT)   // `
// #define JP_CAPS S(JP_EISU) // Caps Lock
// #define JP_EXLM S(JP_1)    // !
// #define JP_DQUO S(JP_2)    // "
// #define JP_HASH S(JP_3)    // #
// #define JP_DLR  S(JP_4)    // $
// #define JP_PERC S(JP_5)    // %
// #define JP_AMPR S(JP_6)    // &
// #define JP_QUOT S(JP_7)    // '
// #define JP_LPRN S(JP_8)    // (
// #define JP_RPRN S(JP_9)    // )
// #define JP_EQL  S(JP_MINS) // =
// #define JP_TILD S(JP_CIRC) // ~
// #define JP_PIPE S(JP_YEN)  // |
// #define JP_GRV  S(JP_AT)   // `
// #define JP_LCBR S(JP_LBRC) // {
// #define JP_CAPS S(JP_EISU) // Caps Lock
// #define JP_PLUS S(JP_SCLN) // +
// #define JP_ASTR S(JP_COLN) // *
// #define JP_RCBR S(JP_RBRC) // }
// #define JP_LABK S(JP_COMM) // <
// #define JP_RABK S(JP_DOT)  // >
// #define JP_QUES S(JP_SLSH) // ?
// #define JP_UNDS S(JP_BSLS) // _

#define L3_ESC LT(3,KC_ESC)
#define SFT_SPC MT(MOD_LSFT,KC_SPC)

///*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT (
            L3_ESC,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    S(JP_MINS),                     JP_LPRN, JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_MINS,
            L3_ESC,  JP_Q,    JP_W,    JP_E,    JP_R,    JP_T,    S(JP_MINS),                     JP_LPRN, JP_Y,    JP_U,    JP_I,    JP_O,    JP_P,    JP_AT,
            KC_TAB,  JP_A,    JP_S,    JP_D,    JP_F,    JP_G,    JP_MINS,   MO(1),       MO(1),  JP_LBRC, JP_H,    JP_J,    JP_K,    JP_L,    JP_SCLN, JP_COLN,
            KC_LALT, JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    JP_UNDS,   MO(1),       MO(1),  JP_LCBR, JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SLSH, JP_UNDS,
                                       JP_MHEN, MO(2),   MO(1),   SFT_SPC,   KC_LCTL,     KC_DEL, KC_BSPC, KC_ENT,  MO(3),   LT(2,JP_HENK),
                                                                  KC_P1,                          KC_P5,
                                                         KC_P2,   KC_P3,   KC_P4,         KC_P6,  KC_P7,   KC_P8
            ),
    [1] = LAYOUT (
            KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
            KC_NO, KC_1,    KC_2,    KC_3,      KC_4,      KC_5,    KC_NO,                             JP_RPRN, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
            KC_NO, JP_EXLM, JP_DQUO, JP_HASH,   JP_DLR,    JP_PERC, JP_ASTR, KC_TRNS,         KC_TRNS, JP_RBRC, JP_AMPR, JP_QUOT, JP_LPRN, JP_RPRN, JP_EQL,  JP_TILD,
            KC_NO, KC_NO,   KC_NO,   C(KC_INS), S(KC_INS), KC_NO,   JP_PIPE, KC_TRNS,         KC_TRNS, JP_RCBR, KC_NO,   KC_NO,   KC_COMM, KC_DOT,  KC_SLSH, JP_UNDS,
                                     KC_NO,     KC_NO,     KC_TRNS, KC_NO,   KC_NO,           KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,
                                                                    KC_A,                                 KC_E,
                                                           KC_B,    KC_C,       KC_D,            KC_F,    KC_G,       KC_H
            ),
    [2] = LAYOUT (
            QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,                  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,
            KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,                  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,
            KC_NO,   KC_F1, KC_F2, KC_F3, KC_F4,  KC_F5,  KC_F6,  KC_NO,   KC_NO, KC_HOME, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_END, KC_NO,
            KC_NO,   KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,
                                   KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                          KC_NO,                  KC_NO,
                                                   KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO, KC_NO
            ),
    [3] = LAYOUT (
            KC_TRNS, G(KC_V), G(KC_DOT), KC_NO, KC_PSCR, LSG(KC_S), KC_NO,                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_TRNS, G(KC_V), G(KC_DOT), KC_NO, KC_PSCR, LSG(KC_S), KC_NO,                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO,   KC_1,    KC_2,      KC_3,  KC_4,    KC_5,      KC_NO, KC_NO,       KC_NO, KC_NO, KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_NO,
            QK_BOOT, KC_NO,   KC_NO,     KC_NO, KC_NO,   KC_NO,     KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                                    KC_NO,                     KC_NO,
                                                             KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO
            ),
    [4] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
//*/

/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [1] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [2] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [3] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
*/

/*
// ロータリーエンコーダーの上下左右を無視している
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [1] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [2] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [3] = LAYOUT( KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
*/

// https://25keys.com/2021/12/15/rotary_encoder/#:~:text=VIA/Remap%E3%82%B3%E3%83%B3%E3%83%91%E3%83%81%E3%83%96%E3%83%AB%E3%81%AA%E3%83%95%E3%82%A1%E3%83%BC%E3%83%A0%E3%81%B8
bool encoder_update_user(uint8_t index, bool clockwise) {
	// via対応
	// 以下の表のようにkeyを設定する
	// index  clockwise     row col     LAYERマクロ内での識別子
	//   0      true    ->  10  0       KA2
	//   0      false   ->  10  1       KA3
	//   1      true    ->  10  2       KA0
	//   1      false   ->  10  3       KA1
	//   2      true    ->  11  0       KB2
	//   2      false   ->  11  1       KB3
	//   3      true    ->  11  2       KB0
	//   3      false   ->  11  3       KB1
	keypos_t key;
	key.row = index < 2 ? 10 : 11;
	if( index == 0 || index == 2 ){
		key.col = clockwise ? 0 : 1;
	} else if( index == 1 || index == 3 ){
		key.col = clockwise ? 2 : 3;
	} else{
		key.col = 4; // NOP
	}
	action_exec((keyevent_t){.key = key, .pressed = true,  .time = (timer_read() | 1)});
	action_exec((keyevent_t){.key = key, .pressed = false, .time = (timer_read() | 1)});

	return true;
}
