/* Copyright 2015-2017 Jack Humbert
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
#include "keymap_bepo.h"

enum planck_layers {
  _BEPO,
  _LOWER,
  _RAISE
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Bépo
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   B  |   É  |   P  |   O  |   È  |   ^  |   V  |   D  |   L  |   J  |  Z   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ent  |   A  |   U  |   I  |   E  |   ,  |   C  |   T  |   S  |   R  |   N  |  M   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   À  |   Y  |   X  |   .  |   K  |   '  |   Q  |   G  |   H  |   F  |  Ç   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  | Ctrl | GUI  | LAlt |Lower |Bcksp | Spc  |Raise | RAlt |   =  |   -  |  W   |
 * `-----------------------------------------------------------------------------------'
 */
[_BEPO] = LAYOUT_planck_grid(
    KC_ESC, BP_B, BP_EACU, BP_P, BP_O, BP_EGRV, BP_DCIR, BP_V, BP_D, BP_L, BP_J, BP_Z,
    KC_ENT, BP_A, BP_U, BP_I, BP_E, BP_COMM, BP_C, BP_T, BP_S, BP_R, BP_N, BP_M,
    KC_LSFT, BP_AGRV, BP_Y, BP_X, BP_DOT, BP_K, BP_QUOT, BP_Q, BP_G, BP_H, BP_F, BP_CCED,
    KC_TAB, KC_LCTL, KC_LGUI, KC_LALT, LOWER, KC_BSPC, KC_SPC, RAISE, KC_RALT, BP_EQL, BP_MINS, BP_W
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |      |   7  |   8  |   9  | Prev | Play | Next |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |      |   4  |   5  |   6  | Mute | Vol- | Vol+ |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F9  |  F10 |  F11 |  F12 |      |   1  |   2  |   3  | Home |  Up  |  End |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   0  |      | Left | Down | Right|
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, BP_7, BP_8, BP_9, KC_MPRV, KC_MPLY, KC_MNXT,
    KC_TRANSPARENT, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, BP_4, BP_5, BP_6, KC_MUTE, KC_VOLD, KC_VOLU,
    KC_TRANSPARENT, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, BP_1, BP_2, BP_3, KC_HOME, KC_UP, KC_END,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, BP_0, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_RIGHT
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |   ~  |   <  |   >  |   #  |      |      |   &  |   |  |   _  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   "  |   {  |   }  |   (  |   )  |   %  |   /  |   +  |   -  |   *  |   =  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   $  |   [  |   ]  |   @  |      |      |Scrn- |Scrn+ |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_planck_grid(
    KC_TRANSPARENT, BP_TILD, BP_LABK, BP_RABK, BP_HASH, KC_NO, KC_NO, BP_AMPR, BP_PIPE, BP_UNDS, KC_NO, KC_NO,
    KC_TRANSPARENT, BP_DQUO, BP_LBRC, BP_RBRC, BP_LPRN, BP_RPRN, BP_PERC, BP_SLSH, BP_PLUS, BP_MINS,  BP_ASTR, BP_EQL,
    KC_TRANSPARENT, BP_DLR, BP_LCBR, BP_RCBR, BP_AT, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_NO
)

};


