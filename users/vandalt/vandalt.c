#include QMK_KEYBOARD_H
#include "layers.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint16_t PROGMEM cv_media_combo[] = {KC_C, MT_V, COMBO_END};
const uint16_t PROGMEM mcomma_media_combo[] = {MT_M, KC_COMMA, COMBO_END};

