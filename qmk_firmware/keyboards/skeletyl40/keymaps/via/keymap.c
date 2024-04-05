// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define BASE     TO(_BASE)
#define NAV      MO(_NAV)
#define NUM      LT(_NUM,KC_ENT)
#define CDHM     TO(_CDHM)

#define GUI_ESC  MT(MOD_LGUI,KC_ESC)

enum layer_names {
    _BASE,
    _NAV,
    _NUM,
    _CDHM,
};

// uint16_t COMBO_LEN = COMBO_LENGTH;
//
// const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
// const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
// const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
//
// combo_t key_combos[] = {
//     COMBO(sd_combo, KC_TAB),
//     COMBO(df_combo, KC_ESC),
//     COMBO(jk_combo, KC_BSPC),
//     COMBO(kl_combo, KC_ENT),
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │               │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │               │ H │ J │ K │ L │ ' │
      * ├───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │               │ N │ M │ , │ . │ / │
      * └───┼───┼───┼───┴───┘               └───┴───┼───┼───┼───┘
      *     │TAB│ESC│┌───┐                     ┌───┐│BSP│ENT│
      *     └───┴───┘│CTL├───┐             ┌───┤Alt│└───┴───┘
      *              └───┤SFT├───┐     ┌───┤SPC├───┘
      *                  └───┤MO1│     │MO2├───┘
      *                      └───┘     └───┘
      */
    [_BASE] = LAYOUT_split_4x5(
        KC_Q,      KC_W,       KC_E,      KC_R,                 KC_T,                                        KC_Y,    KC_U,                            KC_I,     KC_O,     KC_P,
        KC_A,      KC_S,       KC_D,      KC_F,                 KC_G,                                        KC_H,    KC_J,                            KC_K,     KC_L,     KC_QUOT,
        KC_Z,      KC_X,       KC_C,      KC_V,                 KC_B,                                        KC_N,    KC_M,                            KC_COMM,  KC_DOT,   KC_SLSH,
                   KC_TAB,     GUI_ESC,   KC_LCTL,              KC_LSFT,              NAV,       NUM,        KC_SPC,  KC_LALT,                         KC_BSPC,  KC_SCLN
    ),

    [_NAV] = LAYOUT_split_4x5(
        KC_NO,     KC_MINS,    S(KC_EQL), S(KC_LBRC),            S(KC_RBRC),                                 KC_HOME, KC_PGDN,                         KC_PGUP,  KC_END,   KC_INS,
        S(KC_GRV), S(KC_MINS), KC_EQL,    S(KC_9),               S(KC_0),                                    KC_LEFT, KC_DOWN,                         KC_UP,    KC_RIGHT, KC_NO,
        KC_GRV,    S(KC_BSLS), KC_BSLS,   KC_LBRC,               KC_RBRC,                                    KC_NO,   KC_LEFT,                         KC_DOWN,  KC_RIGHT, KC_NO,
                   KC_TRNS,    KC_LCTL,   KC_TRNS,               KC_TRNS,             KC_NO,     KC_TRNS,    KC_TRNS, KC_TRNS,                         KC_DEL,   KC_TRNS
    ),

    [_NUM] = LAYOUT_split_4x5(
        KC_F1,     KC_F2,      KC_F3,     KC_F4,                 KC_F5,                                      KC_F6,   KC_F7,                           KC_F8,    KC_F9,    KC_F10,
        KC_1,      KC_2,       KC_3,      KC_4,                  KC_5,                                       KC_6,    KC_7,                            KC_8,     KC_9,     KC_0,
        KC_NO,     KC_NO,      KC_NO,     KC_LALT,               KC_NO,                                      KC_NO,   KC_RALT,                         KC_NO,    KC_NO,    KC_NO,
                   KC_TRNS,    KC_TRNS,   KC_TRNS,               KC_TRNS,             CDHM,      KC_NO,      KC_TRNS, KC_TRNS,                         KC_F11,   KC_F12
    ),

    [_CDHM] = LAYOUT_split_4x5(
        KC_Q,      KC_W,       KC_F,      KC_P,                  KC_B,                                       KC_J,    KC_L,                            KC_U,     KC_Y,     KC_QUOT,
        KC_A,      KC_R,       KC_S,      KC_T,                  KC_G,                                       KC_M,    KC_N,                            KC_E,     KC_I,     KC_O,
        KC_Z,      KC_X,       KC_C,      KC_D,                  KC_V,                                       KC_K,    KC_H,                            KC_COMM,  KC_DOT,   KC_SLSH,
                   KC_TRNS,    KC_TRNS,   KC_TRNS,               KC_TRNS,             BASE,      KC_ENT,     KC_TRNS, KC_TRNS,                         KC_TRNS,  KC_TRNS
    )
};
