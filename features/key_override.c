// Copyright 2024 Florent Linguenheld (@FLinguenheld)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keycodes.h"

const key_override_t cap_lock_override = ko_make_basic(MOD_MASK_CTRL, OSL(_FR), KC_CAPS_LOCK);

const key_override_t num_0_override = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_0);
const key_override_t num_1_override = ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_1);
const key_override_t num_2_override = ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_2);
const key_override_t num_3_override = ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_3);
const key_override_t num_4_override = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_4);
const key_override_t num_5_override = ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_5);
const key_override_t num_6_override = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_6);
const key_override_t num_7_override = ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_7);
const key_override_t num_8_override = ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_8);
const key_override_t num_9_override = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_9);

const key_override_t minus_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINUS, KC_MINUS);
const key_override_t equal_override = ko_make_basic(MOD_MASK_SHIFT, KC_EQUAL, KC_EQUAL);
const key_override_t left_bracket_override = ko_make_basic(MOD_MASK_SHIFT, KC_LEFT_BRACKET, KC_LEFT_BRACKET);
const key_override_t right_bracket_override = ko_make_basic(MOD_MASK_SHIFT, KC_RIGHT_BRACKET, KC_RIGHT_BRACKET);
const key_override_t backslash_override = ko_make_basic(MOD_MASK_SHIFT, KC_BACKSLASH, KC_BACKSLASH);
const key_override_t semicolon_override = ko_make_basic(MOD_MASK_SHIFT, KC_SEMICOLON, KC_SEMICOLON);
const key_override_t quote_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOTE, KC_QUOTE);
const key_override_t grave_override = ko_make_basic(MOD_MASK_SHIFT, KC_GRAVE, KC_GRAVE);
const key_override_t comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_COMMA);
const key_override_t dot_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_DOT);
const key_override_t slash_override = ko_make_basic(MOD_MASK_SHIFT, KC_SLASH, KC_SLASH);

const key_override_t tilde_override = ko_make_basic(MOD_MASK_SHIFT, KC_TILDE, KC_TILDE);
const key_override_t exclaim_override = ko_make_basic(MOD_MASK_SHIFT, KC_EXCLAIM, KC_EXCLAIM);
const key_override_t at_override = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_AT);
const key_override_t hash_override = ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_HASH);
const key_override_t dollar_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOLLAR, KC_DOLLAR);
const key_override_t percent_override = ko_make_basic(MOD_MASK_SHIFT, KC_PERCENT, KC_PERCENT);
const key_override_t circumflex_override = ko_make_basic(MOD_MASK_SHIFT, KC_CIRCUMFLEX, KC_CIRCUMFLEX);
const key_override_t ampersand_override = ko_make_basic(MOD_MASK_SHIFT, KC_AMPERSAND, KC_AMPERSAND);
const key_override_t asterisk_override = ko_make_basic(MOD_MASK_SHIFT, KC_ASTERISK, KC_ASTERISK);
const key_override_t left_paren_override = ko_make_basic(MOD_MASK_SHIFT, KC_LEFT_PAREN, KC_LEFT_PAREN);
const key_override_t right_paren_override = ko_make_basic(MOD_MASK_SHIFT, KC_RIGHT_PAREN, KC_RIGHT_PAREN);
const key_override_t underscore_override = ko_make_basic(MOD_MASK_SHIFT, KC_UNDERSCORE, KC_UNDERSCORE);
const key_override_t plus_override = ko_make_basic(MOD_MASK_SHIFT, KC_PLUS, KC_PLUS);
const key_override_t left_curly_brace_override = ko_make_basic(MOD_MASK_SHIFT, KC_LEFT_CURLY_BRACE, KC_LEFT_CURLY_BRACE);
const key_override_t right_curly_brace_override = ko_make_basic(MOD_MASK_SHIFT, KC_RIGHT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE);
const key_override_t pipe_override = ko_make_basic(MOD_MASK_SHIFT, KC_PIPE, KC_PIPE);
const key_override_t colon_override = ko_make_basic(MOD_MASK_SHIFT, KC_COLON, KC_COLON);
const key_override_t double_quote_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOUBLE_QUOTE, KC_DOUBLE_QUOTE);
const key_override_t left_angle_bracket_override = ko_make_basic(MOD_MASK_SHIFT, KC_LEFT_ANGLE_BRACKET, KC_LEFT_ANGLE_BRACKET);
const key_override_t right_angle_bracket_override = ko_make_basic(MOD_MASK_SHIFT, KC_RIGHT_ANGLE_BRACKET, KC_RIGHT_ANGLE_BRACKET);
const key_override_t question_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUESTION, KC_QUESTION);

const key_override_t euro_override = ko_make_basic(MOD_MASK_SHIFT, US_EURO, US_EURO);
const key_override_t ldaq_override = ko_make_basic(MOD_MASK_SHIFT, US_LDAQ, US_LDAQ);
const key_override_t rdaq_override = ko_make_basic(MOD_MASK_SHIFT, US_RDAQ, US_RDAQ);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){

    &cap_lock_override,

    &num_0_override,
    &num_1_override,
    &num_2_override,
    &num_3_override,
    &num_4_override,
    &num_5_override,
    &num_6_override,
    &num_7_override,
    &num_8_override,
    &num_9_override,

    &minus_override,
    &equal_override,
    &left_bracket_override,
    &right_bracket_override,
    &backslash_override,
    &semicolon_override,
    &quote_override,
    &grave_override,
    &comma_override,
    &dot_override,
    &slash_override,

    &tilde_override,
    &exclaim_override,
    &at_override,
    &hash_override,
    &dollar_override,
    &percent_override,
    &circumflex_override,
    &ampersand_override,
    &asterisk_override,
    &left_paren_override,
    &right_paren_override,
    &underscore_override,
    &plus_override,
    &left_curly_brace_override,
    &right_curly_brace_override,
    &pipe_override,
    &colon_override,
    &double_quote_override,
    &left_angle_bracket_override,
    &right_angle_bracket_override,
    &question_override,

    &euro_override,
    &ldaq_override,
    &rdaq_override,

    NULL // Elegantly ending the array of overrides
};
