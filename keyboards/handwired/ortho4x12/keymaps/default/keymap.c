// This is the default layout for the handwired/ortho4x12 keyboard based on the
// default layout of the OLKB Planck

/* Copyright 2021 Aaryn Smith

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

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _QWERTY   0
#define _LOWER    1
#define _RAISE    2
#define _ADJUST   3

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |   esc  |    Q   |    W   |    E   |    R   |    T   |    Y   |    U   |    I   |    O   |    P   |  bksp  |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |   tab  |    A   |    S   |    D   |    F   |    G   |    H   |    J   |    K   |    L   |    ;   |    '   |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * | lshift |    Z   |    X   |    C   |    V   |    B   |    N   |    M   |    ,   |    .   |    /   |  enter |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * | bk lgt |  lctrl |  lalt  |  lgui  |  lower |  space |  space |  raise |  left  |  down  |   up   |  right |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 */
[_QWERTY] = LAYOUT_ortho_4x12(
KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
BL_TOGG, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Raise
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |    `   |    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |        |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |    -   |    =   |    [   |    ]   |    \   |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |   F7   |   F8   |   F9   |   F10  |   F11  |   F12  |        |        |        |        |        |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |        |        |        |        |        |        |        |  home  |  home  |  pgdn  |   end  |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 */
[_RAISE] = LAYOUT_ortho_4x12 (
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
     KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
     _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ADJUST,  XXXXXXX, XXXXXXX, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

/* Lower
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |    ~   |    !   |    @   |    #   |    $   |    %   |    ^   |    &   |    *   |    (   |    )   |   del  |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |    _   |    +   |    {   |    }   |    |   |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |   F7   |   F8   |   F9   |   F10  |   F11  |   F12  |        |        |        |        |        |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |        |        |        |        |        |        |        |  next  | vol dn | vol up |  play  |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 */
[_LOWER] = LAYOUT_ortho_4x12 (
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, ADJUST,  KC_MFFD, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Adjust
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        | Reset  |        |        |        |        |        |        |        |        |        |        |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |        |        | AU off |  AU on |        |       |        |        |        |        |        |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |        |       | Mu on  | Mu off |         |        |        |        |        |        |        |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
 */
[_ADJUST] = LAYOUT_ortho_4x12 (
    XXXXXXX, RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, AU_OFF,  AU_ON,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, MU_ON,   MU_OFF,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
