#include QMK_KEYBOARD_H

enum custom_keycodes {
    MACRO_F3_G
};

bool process_record_user(uint16_t keycode, keyrecord_t * record) {
    switch (keycode) {
        case MACRO_F3_G:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_F3) SS_DOWN(X_T) SS_UP(X_T) SS_UP(X_F3));
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_GESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_BSPC,KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_6,KC_PSCR,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_EQL,KC_BSPC,KC_A,KC_S,KC_D,KC_F,KC_G,KC_DEL,KC_LGUI,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_LBRC,KC_RBRC,KC_VOLD,KC_VOLU,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_UP,KC_HAEN,KC_LALT,LCTL(KC_LGUI),KC_LCTL,KC_LSPO,KC_SPC,LT(1,KC_ENT),KC_ENT,KC_RSPC,KC_SPC,RALT_T(KC_BSLS),KC_LEFT,KC_DOWN,KC_RGHT),
	[1] = LAYOUT(KC_GRV,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,LALT_T(KC_TAB),KC_GRV,KC_DEL,KC_UP,LCTL(KC_K),MACRO_F3_G,KC_F6,KC_SLCK,KC_PAUS,KC_INS,KC_PGUP,KC_NO,KC_NO,KC_BSLS,KC_TRNS,KC_NO,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGUP,RESET,KC_NO,KC_NO,KC_HOME,KC_PGDN,KC_END,KC_NO,KC_TRNS,KC_TRNS,KC_NO,KC_NO,KC_HOME,KC_END,KC_PGDN,LCTL(KC_MINS),LCTL(KC_EQL),KC_TRNS,KC_TRNS,KC_NO,KC_NO,KC_TRNS,KC_TRNS,KC_JYEN,KC_PGUP,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_RALT,KC_HOME,KC_PGDN,KC_END)
};
