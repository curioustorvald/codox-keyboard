#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_6, KC_PSCR, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_EQL, KC_BSPC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_LBRC, KC_RBRC, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_VOLD, KC_VOLU, KC_LGUI, KC_DEL, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP, KC_F18, KC_LALT, MO(2), LCTL_T(KC_GRV), KC_SPC, KC_LSPO, LT(1,KC_ENT), LT(1,KC_ENT), KC_RSPC, KC_SPC, RALT_T(KC_BSLS), KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, LALT_T(KC_TAB), KC_DEL, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_F6, KC_TRNS, KC_PAUS, KC_HOME, KC_UP, KC_END, KC_NO, KC_BSLS, KC_TRNS, KC_PSLS, KC_P4, KC_P5, KC_P6, KC_WH_U, KC_PPLS, KC_TRNS, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_TRNS, KC_TRNS, KC_PAST, KC_P1, KC_P2, KC_P3, KC_WH_D, KC_PENT, KC_TAB, KC_TRNS, RESET, KC_PGDN, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, LSFT(KC_LALT), KC_TRNS, KC_P0, KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RALT(KC_BSLS), KC_HOME, KC_PGDN, KC_END),
	[2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_UP, KC_BTN1, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
