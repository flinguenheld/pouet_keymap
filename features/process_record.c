// Copyright 2024 Florent Linguenheld (@FLinguenheld)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keycodes.h"

void tap_accent(uint16_t accent, uint16_t keycode)
{
    uint16_t shifted = get_mods() & MOD_MASK_SHIFT;
    if (shifted)
    {
        unregister_mods(shifted);
        tap_code16(accent);
        tap_code16(S(keycode));
        register_mods(shifted);
    } else {
        tap_code16(accent);
        tap_code16(keycode);
    }
}

// clang-format off
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    uint16_t shifted = get_mods() & MOD_MASK_SHIFT;

    switch (keycode) {
      case KC_ESC:
        if (host_keyboard_led_state().caps_lock) {
          tap_code(KC_CAPS);
        }
        break;
      case FR_A_GRAVE:
          if (record->event.pressed) { tap_accent(US_DGRV, KC_A); } break;
      case FR_E_GRAVE:
          if (record->event.pressed) { tap_accent(US_DGRV, KC_E); } break;
      case FR_I_GRAVE:
          if (record->event.pressed) { tap_accent(US_DGRV, KC_I); } break;
      case FR_O_GRAVE:
          if (record->event.pressed) { tap_accent(US_DGRV, KC_O); } break;
      case FR_U_GRAVE:
          if (record->event.pressed) { tap_accent(US_DGRV, KC_U); } break;
      case FR_Y_GRAVE:
          if (record->event.pressed) { tap_accent(US_DGRV, KC_Y); } break;

      case FR_A_CIRC:
          if (record->event.pressed) { tap_accent(US_DCIR, KC_A); } break;
      case FR_E_CIRC:
          if (record->event.pressed) { tap_accent(US_DCIR, KC_E); } break;
      case FR_I_CIRC:
          if (record->event.pressed) { tap_accent(US_DCIR, KC_I); } break;
      case FR_O_CIRC:
          if (record->event.pressed) { tap_accent(US_DCIR, KC_O); } break;
      case FR_U_CIRC:
          if (record->event.pressed) { tap_accent(US_DCIR, KC_U); } break;
      case FR_Y_CIRC:
          if (record->event.pressed) { tap_accent(US_DCIR, KC_Y); } break;

      case FR_A_DIAE:
          if (record->event.pressed) { tap_accent(US_DIAE, KC_A); } break;
      case FR_E_DIAE:
          if (record->event.pressed) { tap_accent(US_DIAE, KC_E); } break;
      case FR_I_DIAE:
          if (record->event.pressed) { tap_accent(US_DIAE, KC_I); } break;
      case FR_O_DIAE:
          if (record->event.pressed) { tap_accent(US_DIAE, KC_O); } break;
      case FR_U_DIAE:
          if (record->event.pressed) { tap_accent(US_DIAE, KC_U); } break;
      case FR_Y_DIAE:
          if (record->event.pressed) { tap_accent(US_DIAE, KC_Y); } break;

      case CS_QU:
          if (record->event.pressed) {
              if (shifted) {
                  tap_code16(S(KC_Q));
                  tap_code16(S(KC_U));
              } else {
                  tap_code16(KC_Q);
                  tap_code16(KC_U);
              }
          } break;
      case CS_TION:
          if (record->event.pressed) {
              if (shifted) {
                  tap_code16(S(KC_T));
                  tap_code16(S(KC_I));
                  tap_code16(S(KC_O));
                  tap_code16(S(KC_N));
              } else {
                  tap_code16(KC_T);
                  tap_code16(KC_I);
                  tap_code16(KC_O);
                  tap_code16(KC_N);
              }
          } break;
    }
    return true;
}
