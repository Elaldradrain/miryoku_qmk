#include QMK_KEYBOARD_H

#include "danish.h"

const uint32_t PROGMEM unicode_map[] = {
  [KC_ae] = 0x00E6, // ae
  [KC_Ae] = 0x00C6, // Ae

  [KC_oe] = 0x00f8, // oe
  [KC_Oe] = 0x00d8, // Oe

  [KC_aa] = 0x00E5, // aa
  [KC_Aa] = 0x00C5, // Aa
};
