// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*
R4 => D4

R3 => D5

C4 => D6

C5 => D7

C6 => D8

R5 => D9

C3 => D21

R1 => A3 => 29

C2 => A2 => 28

C1 => A1 => 27

R2 => A0 => 26
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │               │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │               │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │               │ N │ M │ , │ . │ / │
      * └───┼───┼───┼───┴───┘               └───┴───┼───┼───┼───┘
      *     │TAB│ESC│┌───┐                     ┌───┐│BSP│ENT│
      *     └───┴───┘│CTL├───┐             ┌───┤Alt│└───┴───┘
      *              └───┤SFT├───┐     ┌───┤SPC├───┘
      *                  └───┤MO1│     │MO2├───┘
      *                      └───┘     └───┘
      */
    [0] = LAYOUT_split_4x5(
        KC_Q,      KC_W,       KC_E,      KC_R,                 KC_T,                                       KC_Y,    KC_U,                            KC_I,     KC_O,     KC_P,
        KC_A,      KC_S,       KC_D,      KC_F,                 KC_G,                                       KC_H,    KC_J,                            KC_K,     KC_L,     KC_SCLN,
        KC_Z,      KC_X,       KC_C,      KC_V,                 KC_B,                                       KC_N,    KC_M,                            KC_COMM,  KC_DOT,   KC_SLSH,
                   KC_TAB,     KC_ESC,    MT(MOD_LCTL,KC_LALT), MT(MOD_LSFT,KC_LGUI), MO(1),       MO(2),   KC_SPC,  MT(MOD_LALT | MOD_RALT,KC_RCTL), KC_BSPC,  KC_ENT
    ),

    [1] = LAYOUT_split_4x5(
        KC_NO,      KC_MINS,    S(KC_EQL), S(KC_LBRC),            S(KC_RBRC),                                 KC_HOME, KC_PGDN,                         KC_PGUP,  KC_END,   KC_INS,
        S(KC_GRV), S(KC_MINS), KC_EQL,    S(KC_9),               S(KC_0),                                    KC_LEFT, KC_DOWN,                         KC_UP,    KC_RIGHT, KC_QUOT,
        KC_GRV,    S(KC_BSLS), KC_BSLS,   KC_LBRC,               KC_RBRC,                                    KC_NO,   KC_LEFT,                         KC_DOWN,  KC_RIGHT, S(KC_QUOT),
                   KC_TAB,     KC_ESC,    MT(MOD_LCTL,KC_LALT),  MT(MOD_LSFT,KC_LGUI), KC_NO,       TO(3),   KC_SPC,  MT(MOD_LALT | MOD_RALT,KC_RCTL), KC_BSPC,  KC_ENT
    ),

    [2] = LAYOUT_split_4x5(
        KC_F1,     KC_F2,      KC_F3,     KC_F4,                 KC_F5,                                      KC_F6,   KC_F7,                           KC_F8,    KC_F9,    KC_F10,
        KC_1,      KC_2,       KC_3,      KC_4,                  KC_5,                                       KC_6,    KC_7,                            KC_8,     KC_9,     KC_0,
        KC_F11,    KC_NO,      KC_NO,     KC_LALT,               KC_NO,                                      KC_NO,   KC_RALT,                         KC_NO,    KC_NO,    KC_F12,
                   KC_TAB,     KC_ESC,    MT(MOD_LCTL,KC_LALT),  MT(MOD_LSFT,KC_LGUI), TO(0),       KC_NO,   KC_SPC,  MT(MOD_LALT | MOD_RALT,KC_RCTL), KC_BSPC,  KC_ENT
    ),

    [3] = LAYOUT_split_4x5(
        KC_Q,      KC_W,       KC_F,      KC_P,                  KC_B,                                       KC_J,    KC_L,                            KC_U,     KC_Y,     KC_SCLN,
        KC_A,      KC_R,       KC_S,      KC_T,                  KC_G,                                       KC_M,    KC_N,                            KC_E,     KC_I,     KC_O,
        KC_Z,      KC_X,       KC_C,      KC_D,                  KC_V,                                       KC_K,    KC_H,                            KC_COMM,  KC_DOT,   KC_SLSH,
                   KC_TAB,     KC_ESC,    MT(MOD_LCTL,KC_LALT),  MT(MOD_LSFT,KC_LGUI), MO(1),       MO(2),   KC_SPC,  MT(MOD_LALT | MOD_RALT,KC_RCTL), KC_BSPC,  KC_ENT
    )
};
