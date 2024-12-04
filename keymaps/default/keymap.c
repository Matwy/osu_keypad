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
        KC_Q,   KC_W, KC_F2, KC_F3,
        KC_C,   KC_MS_WH_UP, KC_MS_WH_DOWN, KC_V
    ),
    
};

void matrix_scan_user(void) {
  rgblight_sethsv_at(HSV_CYAN, 0);
}

void keyboard_post_init_user(void) {
  rgblight_sethsv_at(HSV_CYAN, 0);
}