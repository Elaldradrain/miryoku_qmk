#pragma once

enum unicode_names {
  KC_ae,
  KC_Ae,
  KC_oe,
  KC_Oe,
  KC_aa,
  KC_Aa,
};

#define KC_AE XP(KC_ae, KC_Ae)
#define KC_OE XP(KC_oe, KC_Oe)
#define KC_AA XP(KC_aa, KC_Aa)
