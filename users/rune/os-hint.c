#include "os-hint.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case OS_HINT:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_LALT("f")));
      }
      break;

    case OS_HINT_LEFT:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_LALT("l")));
      }
      break;

    case OS_HINT_RIGHT:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_LALT("r")));
      }
      break;

    case OS_HINT_MIDDLE:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_LALT("m")));
      }
      break;
    }
    return true;
};
