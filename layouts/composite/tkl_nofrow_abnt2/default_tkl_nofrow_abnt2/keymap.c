// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap_brazilian_abnt2.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐
     * │ ' │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ´ │ [ │     │ │Del│End│PgD│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ Ent│ └───┴───┴───┘
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ç │ ~ │ ] │    │
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┤     ┌───┐
     * │Shft│ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ ; │ / │ Shift│     │ ↑ │
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬──┴─┬────┤ ┌───┼───┼───┐
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│ │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘
     */
    [0] = LAYOUT_tkl_nofrow_abnt2(
        BR_QUOT, BR_1,    BR_2,    BR_3,    BR_4,    BR_5,    BR_6,    BR_7,    BR_8,    BR_9,    BR_0,    BR_MINS, BR_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  BR_Q,    BR_W,    BR_E,    BR_R,    BR_T,    BR_Y,    BR_U,    BR_I,    BR_O,    BR_P,    BR_ACUT, BR_LBRC,             KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS, BR_A,    BR_S,    BR_D,    BR_F,    BR_G,    BR_H,    BR_J,    BR_K,    BR_L,    BR_CCED, BR_TILD, BR_RBRC, KC_ENT,
        KC_LSFT, BR_BSLS, BR_Z,    BR_X,    BR_C,    BR_V,    BR_B,    BR_N,    BR_M,    BR_COMM, BR_DOT,  BR_SCLN, BR_SLSH, KC_RSFT,             KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT
    )
};
