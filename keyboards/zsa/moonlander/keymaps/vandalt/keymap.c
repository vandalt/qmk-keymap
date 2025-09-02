#include QMK_KEYBOARD_H
#include "layers.h"

#define LAYOUT_LR( \
    k00, k01, k02, k03, k04, k05,   k06, k07, k08, k09, k10, k11, \
    k12, k13, k14, k15, k16, k17,   k18, k19, k20, k21, k22, k23, \
    k24, k25, k26, k27, k28, k29,   k30, k31, k32, k33, k34, k35, \
    k36, k37, k38, k39, k40, k41,   k42, k43, k44, k45, k46, k47, \
                        k48, k49,   k50, k51) \
    LAYOUT_moonlander( \
        k00,   k01,   k02,   k03,   k04,   k05,   KC_NO,   KC_NO, k06,   k07,   k08,   k09,   k10, k11, \
        k12,   k13,   k14,   k15,   k16,   k17,   KC_NO,   KC_NO, k18,   k19,   k20,   k21,   k22, k23, \
        k24,   k25,   k26,   k27,   k28,   k29,   KC_NO,   KC_NO, k30,   k31,   k32,   k33,   k34, k35, \
        k36,   k37,   k38,   k39,   k40,   k41,                   k42,   k43,   k44,   k45,   k46, k47, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
                                    k48,   k49,   KC_NO,   KC_NO, k50,   k51)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_WRAPPER(VANDALT_BASE_LAYER),
  [1] = LAYOUT_WRAPPER(VANDALT_SYM_LAYER),
  [2] = LAYOUT_WRAPPER(VANDALT_NAV_LAYER),
  [3] = LAYOUT_WRAPPER(VANDALT_MOUSE_LAYER),
  [4] = LAYOUT_WRAPPER(VANDALT_NOMOD_LAYER)
};
