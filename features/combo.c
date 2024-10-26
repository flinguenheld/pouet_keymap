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

  /* -- */
  // CAP_WORD,
  // CAP_LOCK,

  /* French */
  // DEAD_GRAVE,
  // DEAD_CIRCUMFLEX,
  // DEAD_DIAERESIS,

  QU,
  TION,

  /* Tests */
  RUST_MUT,

  /* Just to replace the define in config.h */
  COMBO_LENGTH,
};
uint16_t COMBO_LEN = COMBO_LENGTH;

/* Sequences fo keys */
const uint16_t PROGMEM combo_leader[] = {MO(_NUMERIC), KC_L, COMBO_END};
const uint16_t PROGMEM combo_bootloader[] = {KC_BSPC, KC_L, KC_V, KC_F, COMBO_END};

const uint16_t PROGMEM combo_adj[] = {MO(_MOUSE), MO(_ARROWS), COMBO_END};
const uint16_t PROGMEM combo_fn[] = {MO(_NUMERIC), MO(_ARROWS), COMBO_END};

/* -- */
// const uint16_t PROGMEM combo_cap_word[] = {MO(_NUMERIC), KC_U, COMBO_END};
// const uint16_t PROGMEM combo_cap_lock[] = {MO(_ARROWS), KC_U, COMBO_END};

/* -- */
// const uint16_t PROGMEM combo_dead_grave[] = {MO(_NUMERIC), KC_I, COMBO_END};
// const uint16_t PROGMEM combo_dead_circumflex[] = {MO(_NUMERIC), KC_T, COMBO_END};
// const uint16_t PROGMEM combo_dead_diaeresis[] = {MO(_NUMERIC), KC_T, COMBO_END};

// const uint16_t PROGMEM combo_e_acute[] = {CTL_T(KC_SPACE), KC_E, COMBO_END};
// const uint16_t PROGMEM combo_c_cedilla[] = {CTL_T(KC_SPACE), KC_C, COMBO_END};

const uint16_t PROGMEM combo_qu[] = {LT(_SYMBOLS, KC_SPACE), KC_Q, COMBO_END};
const uint16_t PROGMEM combo_tion[] = {MO(_NUMERIC), CTL_T(KC_T), COMBO_END};

/* Tests */
const uint16_t PROGMEM combo_rust_mut[] = {CTL_T(KC_SPACE), KC_O, KC_P, COMBO_END};

/* Sequences fo keys */
combo_t key_combos[] = {
    [LEADER] = COMBO(combo_leader, QK_LEAD),
    [BOOTLOADER] = COMBO(combo_bootloader, QK_BOOTLOADER),

    [LAYER_ADJ] = COMBO(combo_adj, OSL(_ADJ)),
    [LAYER_FN] = COMBO(combo_fn, OSL(_FN)),

    /* -- */
    // [CAP_WORD] = COMBO(combo_cap_word, QK_CAPS_WORD_TOGGLE),
    // [CAP_LOCK] = COMBO(combo_cap_lock, KC_CAPS_LOCK),

    /* French */
    // [DEAD_GRAVE] = COMBO(combo_dead_grave, US_DGRV),
    // [DEAD_CIRCUMFLEX] = COMBO(combo_dead_circumflex, US_DCIR),
    // [DEAD_DIAERESIS] = COMBO(combo_dead_diaeresis, US_DIAE),

    [QU] = COMBO(combo_qu, CS_QU),
    [TION] = COMBO(combo_tion, CS_TION),

    /* Tests */
    [RUST_MUT] = COMBO_ACTION(combo_rust_mut),
};

/* Specials */
void process_combo_event(uint16_t combo_index, bool pressed) {
  switch (combo_index) {

    case RUST_MUT:
      if (pressed) {
        tap_code16(KC_AMPERSAND);
        tap_code16(KC_M);
        tap_code16(KC_U);
        tap_code16(KC_T);
        tap_code16(KC_SPACE);
      }
      break;
  }
}
