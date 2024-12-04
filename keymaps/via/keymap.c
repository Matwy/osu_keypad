// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ Q │ W │ f2│ f3│
     * ├───┼───┼───┼───┤
     * │ c │ v │ ◘ │ ☻ │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_MEDIA_PLAY_PAUSE, KC_KB_MUTE,
        TO(1), KC_MEDIA_NEXT_TRACK, KC_A, KC_MEDIA_PREV_TRACK
    ),
    [1] = LAYOUT(
        KC_Q,   KC_W, KC_F3, KC_F2,
        TO(0), KC_DOWN, KC_A, KC_UP
    )
};


void keyboard_post_init_user(void) {
    rgblight_setrgb_at(0, 200, 185, 0);
    rgblight_setrgb_at(0, 200, 185, 1);
    rgblight_setrgb_at(0, 200, 185, 2);
    rgblight_setrgb_at(0, 200, 185, 3);
    rgblight_setrgb_at(0, 200, 185, 4);
    rgblight_setrgb_at(0, 200, 185, 5);
}

// Cambia i colori in base al layer attivo
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            rgblight_setrgb_at(0, 200, 185, 0);
            rgblight_setrgb_at(0, 200, 185, 1);
            rgblight_setrgb_at(0, 200, 185, 2);
            rgblight_setrgb_at(0, 200, 185, 3);
            rgblight_setrgb_at(0, 200, 185, 4);
            rgblight_setrgb_at(0, 200, 185, 5);
            break;
        case 1:
            rgblight_setrgb_at(255, 1, 109, 0);
            rgblight_setrgb_at(255, 1, 109, 1);
            rgblight_setrgb_at(255, 1, 109, 2);
            rgblight_setrgb_at(255, 1, 109, 3);
            rgblight_setrgb_at(255, 1, 109, 4);
            rgblight_setrgb_at(255, 1, 109, 5);
            break;
        default:
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            rgblight_setrgb(RGB_WHITE);  // Default fallback
            break;
    }
    return state;
}

