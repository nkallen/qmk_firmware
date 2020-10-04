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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,\
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,\
		MO(1), KC_A, KC_S, KC_D, KC_F, KC_G,\
		KC_LSHIFT, KC_Z, KC_X, KC_C,\
		KC_LCTRL, KC_LALT, KC_LGUI\
	),

    [_FN1] = LAYOUT(
		_______, _______, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_EQUAL, _______, _______,\
		_______, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS, _______,\
		_______, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS, KC_KP_ENTER,\
		_______, KC_KP_1, KC_KP_2, KC_KP_3,\
		_______, KC_KP_DOT, KC_KP_0\
	)
  };

void encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_PPLS);
    } else {
        tap_code(KC_PMNS);
    }
}
