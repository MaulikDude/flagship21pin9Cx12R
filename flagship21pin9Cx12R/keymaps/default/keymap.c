/* Copyright 2021 kb-Maulik Arvind Maradia Dr. Mo, github maulikdude >
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

enum layers{
    L0,
     };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [L0] = LAYOUT(
        KC_P0,   KC_BSPC, MO(1),   KC_LALT, KC_SPC,  KC_RCTL,              KC_ESC,  KC_NO,   KC_PGDN,
	  KC_P2,   KC_DOWN, KC_Z,    KC_C,    KC_B,    KC_M,                 KC_DOT,  KC_NO,   KC_PGUP,
	  KC_P5,   KC_LEFT, KC_A,    KC_D,    KC_G,    KC_J,                 KC_L,    KC_QUOT, KC_INS,
	  KC_P8,   KC_UP,   KC_Q,    KC_E,    KC_T,    KC_U,                 KC_O,    KC_LBRC, KC_DEL,
	  KC_PMNS, KC_NO,   KC_1,    KC_3,    KC_5,    KC_7,                 KC_9,    KC_MINS, KC_PSCR,
	  KC_PAST, KC_NO,   KC_F1,   KC_F3,   KC_F5,   KC_F7,                KC_F9,   KC_F11,  KC_PAUS,
	  KC_PSLS, KC_NLCK, KC_ESC,  KC_F2,   KC_F4,   KC_F6,                KC_F8,   KC_F10,  KC_F12,
	  KC_PPLS, KC_SLCK, KC_GRV,  KC_2,    KC_4,    KC_6,                 KC_8,    KC_0,    KC_EQL,
	  KC_P7,   KC_P9,   KC_TAB,  KC_W,    KC_R,    KC_Y,                 KC_I,    KC_P,    KC_RBRC,  
        KC_P4,   KC_P6,   KC_RGHT, KC_S,    KC_F,    KC_H,                 KC_K,    KC_SCLN, KC_BSLS, 
        KC_P1,   KC_P3,   KC_LSFT, KC_X,    KC_V,    KC_N,                 KC_COMM, KC_SLSH, KC_HOME, 
        KC_PDOT, KC_PENT, KC_LCTL, KC_LGUI, KC_BSPC, MT(MOD_RSFT, KC_SPC), KC_ENT,  KC_CAPS, KC_END 
    ),
};
 