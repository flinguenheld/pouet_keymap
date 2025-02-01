LTO_ENABLE = yes

SRC += features/leader.c
SRC += features/led.c
SRC += features/process_record.c
INTROSPECTION_KEYMAP_C = introspection_keymap.c

KEY_OVERRIDE_ENABLE = yes
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
LEADER_ENABLE = yes

UNICODE_ENABLE = yes
SEND_STRING_ENABLE = yes

RGBLIGHT_ENABLE = yes
WS2812_DRIVER = vendor
