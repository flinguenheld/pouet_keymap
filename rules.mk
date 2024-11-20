LTO_ENABLE = yes

SRC += features/key_override.c
SRC += features/leader.c
SRC += features/led.c
SRC += features/process_record.c
INTROSPECTION_KEYMAP_C = features/combo.c # Replace SRC, see issue #21137
# SRC += features/combo.c # Replace SRC, see issue #21137

KEY_OVERRIDE_ENABLE = yes
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
LEADER_ENABLE = yes

UNICODE_ENABLE = yes
SEND_STRING_ENABLE = yes

RGBLIGHT_ENABLE = yes
WS2812_DRIVER = vendor
