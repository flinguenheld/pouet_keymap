/* Copyright 2024 Florent Linguenheld (@FLinguenheld)
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
#include "keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
            KC_Q      ,     KC_C    ,     KC_O    ,     KC_P    ,   KC_V   ,           KC_J   ,     KC_M    ,     KC_D    ,     KC_Y    ,     KC_W    ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
         ALT_T(KC_A)  , GUI_T(KC_S) , CTL_T(KC_E) , SFT_T(KC_N) ,   KC_F   ,           KC_L   , SFT_T(KC_R) , CTL_T(KC_T) , GUI_T(KC_I) , ALT_T(KC_U) ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
            KC_Z      ,     KC_X    ,   US_EACU   ,     KC_B    ,                                   KC_H    ,     KC_G    ,   OSL(_FR)  ,     KC_K    ,
    //----------------+-------------+-------------+-------------|                             |-------------+-------------+-------------+-------------|
    //                        |------------+------------------------+--------|   |--------+------------------------+-------------|
                                MO(_MOUSE) , LT(_SYMBOLS, KC_SPACE) , KC_ESC ,     KC_ENT , LT(_NUMERIC, KC_SPACE) , MO(_ARROWS)
    //                        |------------+------------------------+--------|   |--------+------------------------+-------------|
    ),

    [_SYMBOLS] = LAYOUT(
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
         KC_BACKSLASH ,   KC_HASH   ,   KC_DQUO   ,  KC_QUOTE   ,  XXXXXXX ,          XXXXXXX ,   KC_CIRC   ,   KC_GRAVE  ,   US_EURO   ,  KC_DOLLAR  ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
        KC_UNDERSCORE ,   KC_EXLM   ,   KC_COMMA  ,   KC_DOT    ,  XXXXXXX ,          XXXXXXX ,   KC_COLON  , KC_SEMICOLON, KC_QUESTION ,    KC_AT    ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
           XXXXXXX    ,   KC_TILDE  ,   KC_PIPE   , KC_AMPERSAND,                                 XXXXXXX   ,   XXXXXXX   ,   XXXXXXX   ,   XXXXXXX   ,
    //----------------+-------------+-------------+-------------|                             |-------------+-------------+-------------+-------------|
    //                                         |---------+---------+---------|   |---------+---------+---------|
                                                 _______ , XXXXXXX , _______ ,     _______ , _______ , _______
    //                                         |---------+---------+---------|   |---------+---------+---------|
    ),

    [_NUMERIC] = LAYOUT(
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
          KC_PERCENT  ,   KC_LABK   ,   KC_EQUAL  ,   KC_RABK   ,  XXXXXXX ,          XXXXXXX ,     KC_7    ,     KC_8    ,     KC_9    ,   KC_DOT    ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
           KC_MINUS   ,   KC_PLUS   , KC_ASTERISK ,   KC_SLASH  ,  XXXXXXX ,          XXXXXXX ,     KC_4    ,     KC_5    ,     KC_6    ,    KC_0     ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
           XXXXXXX    ,   XXXXXXX   ,   XXXXXXX   ,   XXXXXXX   ,                                   KC_1    ,     KC_2    ,     KC_3    ,   KC_COMMA  ,
    //----------------+-------------+-------------+-------------|                             |-------------+-------------+-------------+-------------|
    //                                         |---------+---------+---------|   |---------+---------+---------|
                                                 _______ , _______ , _______ ,     _______ , XXXXXXX , _______
    //                                         |---------+---------+---------|   |---------+---------+---------|
    ),

    [_ARROWS] = LAYOUT(
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
          QK_LEADER   ,   KC_LCBR   ,   KC_RCBR   ,   XXXXXXX   ,  XXXXXXX ,          XXXXXXX ,   KC_HOME   , KC_PAGE_DOWN,  KC_PAGE_UP ,   KC_END    ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
           KC_LBRC    ,   KC_LPRN   ,   KC_RPRN   ,   KC_RBRC   ,  XXXXXXX ,          XXXXXXX ,   KC_LEFT   ,   KC_DOWN   ,    KC_UP    ,   KC_RIGHT  ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
           XXXXXXX    ,   XXXXXXX   ,   XXXXXXX   ,   XXXXXXX   ,                               KC_BACKSPACE,    KC_TAB   ,  S(KC_TAB)  ,   KC_DEL    ,
    //----------------+-------------+-------------+-------------|                             |-------------+-------------+-------------+-------------|
    //                                         |---------+---------+---------|   |---------+---------+---------|
                                                 _______ , _______ , _______ ,     _______ , _______ , XXXXXXX
    //                                         |---------+---------+---------|   |---------+---------+---------|
    ),
    
    [_MOUSE] = LAYOUT(
    //----------------+-------------+---------------+----------------+---------|       |---------+--------------+--------------+--------------+---------|
        KC_MS_WH_LEFT , KC_MS_WH_UP , KC_MS_WH_DOWN , KC_MS_WH_RIGHT , XXXXXXX ,         XXXXXXX ,   XXXXXXX    ,   XXXXXXX    ,   XXXXXXX    , XXXXXXX ,
    //----------------+-------------+---------------+----------------+---------|       |---------+--------------+--------------+--------------+---------|
          KC_MS_LEFT  ,  KC_MS_UP   ,  KC_MS_DOWN   ,  KC_MS_RIGHT   , XXXXXXX ,         XXXXXXX , KC_MS_ACCEL0 , KC_MS_ACCEL1 , KC_MS_ACCEL2 , XXXXXXX ,
    //----------------+-------------+---------------+----------------+---------|       |---------+--------------+--------------+--------------+---------|
           KC_BSPC    ,  S(KC_TAB)  ,    KC_TAB     ,     KC_DEL     ,                               XXXXXXX    ,   XXXXXXX    ,   XXXXXXX    , XXXXXXX ,
    //----------------+-------------+---------------+----------------|                           |--------------+--------------+--------------+---------|
    //                                             |---------+---------+---------|   |------------+------------+------------|
                                                     XXXXXXX , _______ , _______ ,     KC_MS_BTN1 , KC_MS_BTN3 , KC_MS_BTN2
    //                                             |---------+---------+---------|   |------------+------------+------------|
    ),

    [_FR] = LAYOUT(
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
         FR_A_CIRC    ,   US_CCED   ,  FR_E_CIRC  ,  FR_O_CIRC  ,  XXXXXXX ,          XXXXXXX ,   XXXXXXX   ,  FR_Y_CIRC  ,  FR_I_CIRC  ,  FR_U_CIRC  ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
         FR_A_GRAVE   ,   US_OE     ,  FR_E_GRAVE ,  FR_O_GRAVE ,  US_LDAQ ,          US_RDAQ ,   US_EACU   ,  FR_Y_GRAVE ,  FR_I_GRAVE ,  FR_U_GRAVE ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
         FR_A_DIAE    ,   US_AE     ,  FR_E_DIAE  ,  FR_O_DIAE  ,                                 XXXXXXX   ,  FR_Y_DIAE  ,  FR_I_DIAE  ,  FR_U_DIAE  ,
    //----------------+-------------+-------------+-------------|                             |-------------+-------------+-------------+-------------|
    //                                         |---------+---------+---------|   |---------+---------+---------|
                                                 _______ , _______ , _______ ,     _______ , _______ , _______
    //                                         |---------+---------+---------|   |---------+---------+---------|
    ),

    [_FN] = LAYOUT(
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
           _______    ,   XXXXXXX   ,   XXXXXXX   ,   XXXXXXX   ,  XXXXXXX ,          XXXXXXX ,    KC_F7    ,    KC_F8    ,    KC_F9    ,    KC_F10   ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
           XXXXXXX    ,   XXXXXXX   ,   XXXXXXX   ,   XXXXXXX   ,  XXXXXXX ,          XXXXXXX ,    KC_F4    ,    KC_F5    ,    KC_F6    ,    KC_F11   ,
    //----------------+-------------+-------------+-------------+----------|       |----------+-------------+-------------+-------------+-------------|
           XXXXXXX    ,   XXXXXXX   ,   XXXXXXX   ,   XXXXXXX   ,                                  KC_F1    ,    KC_F2    ,    KC_F3    ,    KC_F12   ,
    //----------------+-------------+-------------+-------------|                             |-------------+-------------+-------------+-------------|
    //                                         |---------+---------+---------|   |---------+---------+---------|
                                                 _______ , _______ , _______ ,     _______ , XXXXXXX , XXXXXXX
    //                                         |---------+---------+---------|   |---------+---------+---------|
    ),

    [_ADJ] = LAYOUT(
    //----------+---------+---------+---------+------------------|       |---------+---------+---------+-----------------+---------|
        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,  KC_PRINT_SCREEN ,         XXXXXXX , XXXXXXX , XXXXXXX , KC_AUDIO_VOL_UP , XXXXXXX ,
    //----------+---------+---------+---------+------------------|       |---------+---------+---------+-----------------+---------|
        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,S(KC_PRINT_SCREEN),         XXXXXXX , XXXXXXX , XXXXXXX ,KC_AUDIO_VOL_DOWN, XXXXXXX ,
    //----------+---------+---------+---------+------------------|       |---------+---------+---------+-----------------+---------|
        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                                      XXXXXXX , XXXXXXX ,  KC_AUDIO_MUTE  , XXXXXXX ,
    //----------+---------+---------+---------|                                    |---------+---------+-----------------+---------|
    //                               |---------+---------+---------|   |---------+---------+------------------|
                                       XXXXXXX , _______ , _______ ,     XXXXXXX , XXXXXXX , XXXXXXX
    //                               |---------+---------+---------|   |---------+---------+------------------|
    ),
};
