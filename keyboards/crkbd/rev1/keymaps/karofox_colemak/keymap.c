/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

/*
TEMPLATE

[X] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
*/



#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I,    KC_O,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(2),  KC_SPC,    KC_BSPC,   MO(1), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_TAB,  KC_GRV,   KC_LT,   KC_GT, KC_MINS, KC_UNDS,                      KC_CIRC, KC_LCBR, KC_RCBR,  KC_DLR, KC_PIPE,  KC_ESC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_EXLM, KC_ASTR, KC_SLSH,  KC_EQL, KC_AMPR,                      KC_HASH, KC_LPRN, KC_RPRN, KC_SCLN, KC_DQUO,  KC_ENT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,                        KC_AT, KC_COLN, KC_COMM,  KC_DOT, KC_QUOT, KC_RSFT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI,   MO(3),  KC_SPC,    KC_BSPC, _______, KC_RALT
                                        //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_TAB, XXXXXXX,    KC_1,    KC_2,    KC_3, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_ESC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX,    KC_4,    KC_5,    KC_6, XXXXXXX,                      XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,  KC_ENT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX,    KC_7,    KC_8,    KC_9,    KC_0,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI, _______, KC_SPC,    KC_BSPC,    MO(3), KC_RALT
                                        //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,                      XXXXXXX, RM_HUEU, RM_SATU, RM_VALU, RM_TOGG, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,                      XXXXXXX, RM_HUED, RM_SATD, RM_VALD, RM_NEXT, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI, _______,  KC_SPC,     KC_BSPC, _______, KC_RALT
                                        //`--------------------------'  `--------------------------'
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
