#pragma once

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
#define MK_C_OFFSET_1        2
#define MK_C_OFFSET_UNMOD    6
#define MK_C_OFFSET_2        18

#define MK_W_INTERVAL_UNMOD  80
#define MK_W_INTERVAL_1      120
#define MK_W_INTERVAL_2      30

#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE, UNICODE_MODE_LINUX, UNICODE_MODE_MACOS

#define MIRYOKU_LAYER_FUN \
KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_RALT, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), \
KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, UC_NEXT, KC_LSFT,         KC_LCTL,          KC_LALT,        KC_LGUI,       \
KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, U_NA,    TD(U_TD_U_FUN),  TD(U_TD_U_MEDIA), KC_ALGR,        KC_RCTL,       \
U_NP,   U_NP,  KC_AE, KC_OE, KC_AA,   U_NA,    U_NA,            U_NA,             U_NP,           U_NP

#define MIRYOKU_LAYER_MOUSE \
TD(U_TD_BOOT), OS_HINT_RIGHT, OS_HINT_LEFT,   OS_HINT_MIDDLE,   OS_HINT, U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND, \
KC_LGUI,       KC_LALT,       KC_ACL1,        KC_ACL2,          U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,  \
U_NA,          KC_ALGR,       TD(U_TD_U_SYM), TD(U_TD_U_MOUSE), U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,  \
U_NP,          U_NP,          U_NA,           U_NA,             U_NA,    KC_BTN2, KC_BTN1, KC_BTN3, U_NP,    U_NP
