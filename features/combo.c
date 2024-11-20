// Copyright 2024 Florent Linguenheld (@FLinguenheld)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keycodes.h"

/* How to :
        - Add an entry in the enum
        - Create a new sequence of keys
        - Link the enum to this sequence in the key_combos table

   For macros :
        - Same steps
        - And add the macro in the process_combo_event() function
*/

// Allow all combos to work with the numeric layer
uint8_t combo_ref_from_layer(uint8_t layer){
    switch (get_highest_layer(layer_state)){
        case _NUMERIC: return _BASE;
        default: return layer;
    }
    return layer;
}

// --
enum combos {
  LEADER,
  BOOTLOADER,

  LAYER_ADJ,
  LAYER_FN,

  CAP_LOCK,

  QU,
  TION,

  /* Just to replace the define in config.h */
  COMBO_LENGTH,
};
uint16_t COMBO_LEN = COMBO_LENGTH;

/* Sequences fo keys */
const uint16_t PROGMEM combo_leader[] = {MO(_NUMERIC), KC_L, COMBO_END};
const uint16_t PROGMEM combo_bootloader[] = {KC_BSPC, KC_L, KC_V, KC_F, COMBO_END};

const uint16_t PROGMEM combo_adj[] = {MO(_MOUSE), MO(_ARROWS), COMBO_END};
const uint16_t PROGMEM combo_fn[] = {MO(_NUMERIC), MO(_ARROWS), COMBO_END};

const uint16_t PROGMEM combo_cap_lock[] = {SFT_T(KC_N), SFT_T(KC_R), COMBO_END};

/* -- */
const uint16_t PROGMEM combo_qu[] = {KC_SPACE, KC_Q, COMBO_END};
const uint16_t PROGMEM combo_tion[] = {MO(_NUMERIC), CTL_T(KC_T), COMBO_END};

/* Sequences fo keys */
combo_t key_combos[] = {
    [LEADER] = COMBO(combo_leader, QK_LEAD),
    [BOOTLOADER] = COMBO(combo_bootloader, QK_BOOTLOADER),

    [LAYER_ADJ] = COMBO(combo_adj, MO(_ADJ)),
    [LAYER_FN] = COMBO(combo_fn, MO(_FN)),

    [CAP_LOCK] = COMBO(combo_cap_lock, KC_CAPS_LOCK),

    [QU] = COMBO(combo_qu, CS_QU),
    [TION] = COMBO(combo_tion, CS_TION),
};

/* Specials */
void process_combo_event(uint16_t combo_index, bool pressed) {
  switch (combo_index) {

    // case RUST_MUT:
    //   if (pressed) {
    //     tap_code16(KC_AMPERSAND);
    //     tap_code16(KC_M);
    //     tap_code16(KC_U);
    //     tap_code16(KC_T);
    //     tap_code16(KC_SPACE);
    //   }
    //   break;
  }
}
