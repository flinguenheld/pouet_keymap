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

#pragma once

#define SPLIT

#ifdef SPLIT

    #undef EE_HANDS
    #undef SPLIT_USB_DETECT

    // Gemini controller VBUS --
    #define USB_VBUS_PIN GP19
    #define SPLIT_HAND_PIN GP10
    
    // RP2040 ZERO (no real vbus, only one side can be the master) --
    // Master on the left --
    // #define USB_VBUS_PIN GP10
    // #define SPLIT_HAND_PIN GP10

    // Or on the right --
    // #define USB_VBUS_PIN GP12
    // #define SPLIT_HAND_PIN GP12

    // Without VBus, if boot fail on cold start, increase this value (default 2000)
    // #define SPLIT_USB_TIMEOUT 8000

#endif

#define TAPPING_TERM 200
#define COMBO_TERM 30
// #define COMBO_ONLY_FROM_LAYER 0

/* Unicode */
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

/* Leader */
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 280
#define LEADER_NO_TIMEOUT

/* LEDs */
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_HSV
#define WS2812_DI_PIN 16
#define RGBLIGHT_LIMIT_VAL 10

#ifdef SPLIT
  #define RGBLIGHT_LED_COUNT 2
  #define RGBLED_SPLIT { 1, 1 }
#else
  #define RGBLIGHT_LED_COUNT 1
#endif 

/* Mouse */
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_0 1
#define MK_C_INTERVAL_0 12

#define MK_C_OFFSET_1 4
#define MK_C_INTERVAL_1 18

#define MK_C_OFFSET_UNMOD 13
#define MK_C_INTERVAL_UNMOD 15

#define MK_C_OFFSET_2 25
#define MK_C_INTERVAL_2 10

#define MK_W_OFFSET_0 1
#define MK_W_INTERVAL_0 160

#define MK_W_OFFSET_1 2
#define MK_W_INTERVAL_1 120

#define MK_W_OFFSET_UNMOD 4
#define MK_W_INTERVAL_UNMOD 70

#define MK_W_OFFSET_2 10
#define MK_W_INTERVAL_2 30
