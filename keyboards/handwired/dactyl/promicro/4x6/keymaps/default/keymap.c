// Copyright 2019 Matthew Adereth
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _MM,
    _LOWER,
    _RAISE,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define MMEDIA TT(_MM)

#define LG_MINS LGUI_T(KC_MINS)
#define LA_EQL LALT_T(KC_EQL)
#define LA_LBRC LALT_T(KC_LBRC)
#define RG_RBRC RGUI_T(KC_RBRC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_4x6(
        KC_ESC,  KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,                                           KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_TAB,  KC_A,    KC_S,   KC_D,    KC_F,    KC_G,                                           KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,                                           KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, LG_MINS, LA_EQL, KC_LEFT, KC_RGHT,                                                         KC_UP, KC_DOWN, LA_LBRC, RG_RBRC, KC_RCTL,
                                                            LOWER,  KC_CAPS,      MMEDIA,  RAISE,
                                                    KC_SPC, KC_DEL, KC_HOME,      KC_PGUP, KC_BSPC, KC_ENT,
                                                                    KC_END,       KC_PGDN
    ),
    [_MM] = LAYOUT_4x6(
        _______, _______, _______, KC_MS_U, _______, _______,                                        KC_NO, KC_VOLU, KC_NO,   KC_NO,   KC_NO, KC_NO,
        _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,                                        KC_NO, KC_MUTE, KC_MNXT, KC_MPRV, KC_NO, KC_NO,
        _______, _______, _______, _______, _______, _______,                                        KC_NO, KC_VOLD, KC_MPLY, KC_MSTP, KC_NO, KC_NO,
        _______, _______, KC_ACL2, KC_ACL1, KC_ACL0,                                                        KC_NO,   KC_NO,   KC_NO,   KC_NO, QK_BOOT, 
                                                              _______, KC_NO,      _______, _______,
                                                     KC_BTN1, KC_BTN2, KC_NO,      KC_NO,   KC_NO,   KC_NO,
                                                                       KC_NO,      KC_NO
    ),
    [_LOWER] = LAYOUT_4x6(
        KC_NO,   KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_NO,                                        KC_UP,   KC_P7, KC_P8, KC_P9,   KC_PAST, KC_NO,
        KC_NO,   KC_F5, KC_F6,  KC_F7,  KC_F8,  KC_NO,                                        KC_NUM,  KC_P4, KC_P5, KC_P6,   KC_PPLS, KC_NO,
        KC_NO,   KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,                                        KC_DOWN, KC_P1, KC_P2, KC_P3,   KC_PSLS, KC_NO,
        QK_BOOT, KC_NO, KC_NO,  KC_NO,  KC_NO,                                                         KC_NO, KC_P0, KC_PDOT, KC_PEQL, KC_NO,
                                                       _______, KC_NO,      KC_NO,   KC_NO,
                                                KC_NO, KC_NO,   KC_NO,      KC_RGUI, KC_RSFT, KC_RCTL,
                                                                KC_NO,      KC_LALT
    ),
    [_RAISE] = LAYOUT_4x6(
        KC_NO, KC_EXLM, KC_AT,  KC_HASH, KC_DLR,  KC_PERC,                                        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
        KC_NO, KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
        KC_NO, KC_NO,   KC_NO,  KC_TILD, KC_GRV,  KC_NO,                                          KC_NO,   KC_BSLS, KC_PIPE, KC_NO,   KC_NO,   KC_NO, 
        KC_NO, KC_SCRL, KC_INS, KC_PSCR, KC_PAUS,                                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT, 
                                                           KC_NO,   KC_NO,        KC_NO, _______,
                                                  KC_LCTL, KC_LSFT, KC_LGUI,      KC_NO, KC_NO,   KC_NO,
                                                                    KC_LALT,      KC_NO
    )
};
