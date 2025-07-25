#include QMK_KEYBOARD_H

#include "keymap_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
		// 0       1        2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       
		{ KC_ESC,  KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_NO   },
		{ KC_CIRC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DE_SS,   KC_BSPC, DE_ACUT, KC_INS,  KC_HOME, KC_PGUP },
		{ KC_TAB , KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    DE_Z,    KC_U,    KC_I,    KC_O,    KC_P,    DE_UDIA, DE_PLUS, KC_HASH, KC_DEL,  KC_END,  KC_PGDN },
		{ KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    DE_ODIA, DE_ADIA, KC_ENT,  KC_NO,   KC_NO,   KC_NO,   KC_NO   },
		{ KC_LSFT, DE_Y,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  DE_MINS, KC_RSFT, KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_NO   },
		{ KC_LCTL, KC_LWIN, KC_LALT, KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_RWIN, KC_RWIN, KC_RCTL, KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT },
		                                                                                         // /\ Reserved for future use
    }
};
