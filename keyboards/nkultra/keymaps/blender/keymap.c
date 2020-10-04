/* Copyright 2018 Jack Humbert
 *
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

#include QMK_KEYBOARD_H

#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _FN3 3

enum custom_keycodes {
    NINETY = SAFE_RANGE,
    ONEHUNDREDEIGHTY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_COMMA, KC_DOT, KC_O,\
		KC_TAB, KC_Q, KC_B, KC_E, KC_I, KC_K, KC_KP_5,\
		MO(1), KC_A, KC_S, KC_R, KC_G,\
		LM(3, MOD_LSFT), KC_Z, KC_X, KC_Y,\
		KC_CAPSLOCK, KC_LALT, LM(2, MOD_LGUI)\
	),

    [_FN1] = LAYOUT(
		_______, NINETY, ONEHUNDREDEIGHTY, KC_KP_ASTERISK, KC_T, KC_N, _______,\
		_______, KC_P, KC_W, KC_KP_9, KC_KP_MINUS, KC_KP_ENTER, _______,\
		_______, KC_H, KC_KP_5, KC_J, KC_F,\
		_______, KC_M, KC_KP_2, KC_C,\
		_______, KC_KP_DOT, KC_KP_0\
	),

	[_FN2] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______,\
		KC_TAB, KC_Q, KC_W, _______, _______, _______, _______,\
		_______, _______, KC_S, _______, _______,\
		_______, KC_Z, _______, _______,\
		_______, _______, _______\
	),

	[_FN3] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______,\
		_______, _______, _______, _______, _______, _______, _______,\
		_______, _______, _______, KC_D, _______,\
		_______, _______, _______, _______,\
		_______, _______, _______\
	)
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_LBRACKET);
    } else {
        tap_code(KC_RBRACKET);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case NINETY:
        if (record->event.pressed) {
            SEND_STRING("90");
        }
        break;
    case ONEHUNDREDEIGHTY:
        if (record->event.pressed) {
            SEND_STRING("180");
        }
        break;
    }
    return true;
};
