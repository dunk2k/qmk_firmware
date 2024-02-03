// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

#if defined(MONO_BACKLIGHT_WT75_C)
#    include "drivers/led/issi/is31fl3736-mono.h"
#endif

#if defined(LED_MATRIX_ENABLE) || defined(MONO_BACKLIGHT_WT75_C)
const is31fl3736_led_t PROGMEM g_is31fl3736_leds[IS31FL3736_LED_COUNT] = {
    {0, A_1},
    {0, A_2},
    {0, A_3},
    {0, A_4},
    {0, A_5},
    {0, A_6},
    {0, A_7},
    {0, A_8},

    {0, B_1},
    {0, B_2},
    {0, B_3},
    {0, B_4},
    {0, B_5},
    {0, B_6},
    {0, B_7},
    {0, B_8},

    {0, C_1},
    {0, C_2},
    {0, C_3},
    {0, C_4},
    {0, C_5},
    {0, C_6},
    {0, C_7},
    {0, C_8},

    {0, D_1},
    {0, D_2},
    {0, D_3},
    {0, D_4},
    {0, D_5},
    {0, D_6},
    {0, D_7},
    {0, D_8},

    {0, E_1},
    {0, E_2},
    {0, E_3},
    {0, E_4},
    {0, E_5},
    {0, E_6},
    {0, E_7},
    {0, E_8},

    {0, F_1},
    {0, F_2},
    {0, F_3},
    {0, F_4},
    {0, F_5},
    {0, F_6},
    {0, F_7},
    {0, F_8},

    {0, G_1},
    {0, G_2},
    {0, G_3},
    {0, G_4},
    {0, G_5},
    {0, G_6},
    {0, G_7},
    {0, G_8},

    {0, H_1},
    {0, H_2},
    {0, H_3},
    {0, H_4},
    {0, H_5},
    {0, H_6},
    {0, H_7},
    {0, H_8},

    {0, I_1},
    {0, I_2},
    {0, I_3},
    {0, I_4},
    {0, I_5},
    {0, I_6},
    {0, I_7},
    {0, I_8},

    {0, J_1},
    {0, J_2},
    {0, J_3},
    {0, J_4},
    {0, J_5},
    {0, J_6},
    {0, J_7},
    {0, J_8},

    {0, K_1},
    {0, K_2},
    {0, K_3},
    {0, K_4},
    {0, K_5},
    {0, K_6},
    {0, K_7},
    {0, K_8},

    {0, L_1},
    {0, L_2},
    {0, L_3},
    {0, L_4},
    {0, L_5},
    {0, L_6},
    {0, L_7},
    {0, L_8}
};
#endif
