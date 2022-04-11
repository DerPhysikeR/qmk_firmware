/* Copyright 2021 weteor
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layers
{
    _ALPHA_COLEMAK_DH = 0,
    /* _ALPHA_US_ON_GERMAN, */
    _NUM,
    _SYM,
    _NAV,
    _CFG,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    
    [_ALPHA_COLEMAK_DH] = LAYOUT(
        KC_Q,            KC_W,            KC_F,            KC_P,            KC_B,                KC_J,    KC_L,            KC_U,            KC_Y,            KC_SCLN,  
        LGUI_T(KC_A),    LALT_T(KC_R),    LSFT_T(KC_S),    LCTL_T(KC_T),    KC_G,                KC_M,    RCTL_T(KC_N),    RSFT_T(KC_E),    RALT_T(KC_I),    RGUI_T(KC_O),
        KC_Z,            KC_X,            KC_C,            KC_D,            KC_V,                KC_K,    KC_H,            KC_COMM,         KC_DOT,          KC_SLSH,
            
                                             LT(_NAV, KC_ESC), LT(_NUM, KC_SPC), LT(_SYM, KC_TAB),     LT(_SYM, KC_BSPC), LT(_NUM, KC_ENT), LT(_NAV, KC_DEL)
    ),
    /* [_ALPHA_US_ON_GERMAN] = LAYOUT( */
    /*     KC_Q,            KC_W,            KC_F,            KC_P,            KC_B,                KC_J,    KC_L,            KC_U,            KC_Z,            KC_SCLN, */  
    /*     LGUI_T(KC_A),    LALT_T(KC_R),    LSFT_T(KC_S),    LCTL_T(KC_T),    KC_G,                KC_M,    RCTL_T(KC_N),    RSFT_T(KC_E),    RALT_T(KC_I),    RGUI_T(KC_O), */
    /*     KC_Y,            KC_X,            KC_C,            KC_D,            KC_V,                KC_K,    KC_H,            KC_COMM,         KC_DOT,          KC_SLSH, */
            
    /*                                          LT(_NUM, KC_ESC), LT(_SYM, KC_SPC), LT(_NAV, KC_TAB),     LT(_NAV, KC_BSPC), LT(_SYM, KC_ENT), LT(_NUM, KC_DEL) */
    /* ), */
    [_NUM] = LAYOUT(
        XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,           XXXXXXX,                  KC_EQL,   KC_7,          KC_8,          KC_9,         XXXXXXX,
        LGUI_T(KC_BSLS),  LALT_T(KC_LBRC),  LSFT_T(KC_RBRC),  LCTL_T(KC_QUOTE),  XXXXXXX,                  KC_MINS,  RCTL_T(KC_4),  RSFT_T(KC_5),  RALT_T(KC_6), RGUI_T(XXXXXXX),
        XXXXXXX,          XXXXXXX,          XXXXXXX,          KC_GRV,           XXXXXXX,                   KC_0,     KC_1,          KC_2,          KC_3,         XXXXXXX,
                                                                     XXXXXXX, XXXXXXX, XXXXXXX,      KC_PEQL, KC_PENT, XXXXXXX
    ),
    [_NAV] = LAYOUT(
        XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX,                                KC_HOME, KC_PGDN, KC_PGUP, KC_END,   XXXXXXX,
        LGUI_T(XXXXXXX), LALT_T(KC_LEFT), LSFT_T(KC_DOWN), LCTL_T(KC_RGHT), XXXXXXX,                                KC_LEFT, RCTL_T(KC_DOWN), RSFT_T(KC_UP),   RALT_T(KC_RGHT),  RGUI_T(XXXXXXX),
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
                                        XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, MO(_CFG), XXXXXXX         
    ),
    [_SYM] = LAYOUT(
        KC_GRV , KC_CIRC,   KC_AT,  KC_DLR, KC_TILD,                                KC_F12, KC_F7, KC_F8, KC_F9, XXXXXXX,
        KC_SLSH, KC_LBRC, KC_LCBR, KC_LPRN,  KC_EQL,                                KC_F11, KC_F4, KC_F5, KC_F6, XXXXXXX, 
        _______, KC_QUES, KC_PLUS, KC_PERC, XXXXXXX,                                KC_F10, KC_F1, KC_F2, KC_F3, _______,
                                        XXXXXXX, MO(_CFG), XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX         
    ),
    [_CFG] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX,DF(_ALPHA_COLEMAK_DH), XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                         XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
    ),
};
