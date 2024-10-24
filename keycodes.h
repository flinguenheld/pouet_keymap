// Copyright 2024 Florent Linguenheld (@FLinguenheld)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "keymap_us_extended.h"

enum custom_layers {
  _BASE,
  _SYM1,
  _SYM2,
  _NUMERIC,
  _ARROWS,
  _MOUSE,
  _ADJ,
  _FN,
  _FR,
};

enum custom_keys {
  UNICODE = QK_KB_0, // Replace SAFE_RANGE, see pr #19909

  FR_A_GRAVE,
  FR_E_GRAVE,
  FR_I_GRAVE,
  FR_O_GRAVE,
  FR_U_GRAVE,
  FR_Y_GRAVE,

  FR_A_CIRC,
  FR_E_CIRC,
  FR_I_CIRC,
  FR_O_CIRC,
  FR_U_CIRC,
  FR_Y_CIRC,

  FR_A_DIAE,
  FR_E_DIAE,
  FR_I_DIAE,
  FR_O_DIAE,
  FR_U_DIAE,
  FR_Y_DIAE,

  CS_QU,
  CS_TION,
};

// Tap Dance keycodes
enum td_keycodes {
    LT_MOUSE_LEADER,
};
