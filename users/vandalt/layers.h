#define LAYOUT_WRAPPER(...) LAYOUT_LR(__VA_ARGS__)

#define VANDALT_BASE_LAYER \
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL, \
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS, \
    KC_BSPC,        MT(MOD_LSFT, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LGUI, KC_F),LT(2, KC_G),                                    LT(1, KC_H),    MT(MOD_RGUI, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_LALT, KC_L),MT(MOD_RSFT, KC_SCLN),KC_QUOTE, \
    CW_TOGG,          MT(MOD_LCTL, KC_Z),MT(MOD_LSFT, KC_X),KC_C,           MT(MOD_RALT, KC_V),LT(3, KC_B),                                    KC_N,           MT(MOD_RALT, KC_M),KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER, \
                                                    LT(1, KC_ESCAPE),KC_LEFT_GUI,                                    TG(4),        LT(2, KC_SPACE)

#define VANDALT_SYM_LAYER \
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11, \
    LGUI(KC_GRAVE), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT,     KC_LCBR,        KC_RCBR,        RALT(KC_LBRC),  RALT(KC_RBRC),  KC_F12, \
    LGUI(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, KC_BSLS,        KC_TRANSPARENT, \
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_PIPE,        KC_TRANSPARENT, \
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_SPACE

#define VANDALT_NAV_LAYER \
    QK_BOOT,        RGB_SPI,        RGB_MODE_FORWARD,KC_TRANSPARENT,        TOGGLE_LAYER_COLOR,RGB_VAI,                                        KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR, \
    KC_TRANSPARENT, RGB_SPD,        QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_PRINT,RGB_VAD,                                        KC_AUDIO_VOL_DOWN,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_BRIGHTNESS_UP,KC_TRANSPARENT, \
    KC_BSPC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_BRIGHTNESS_DOWN,KC_TRANSPARENT, \
    QK_LLCK,        RGB_HUD,        RGB_HUI,        KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT,                                KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, \
                                                    KC_DELETE,      RGB_TOG,                                        KC_TRANSPARENT, KC_TRANSPARENT

#define VANDALT_MOUSE_LAYER \
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, \
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, \
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, \
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, \
                                                    KC_DELETE,      KC_TRANSPARENT,                                 KC_MS_BTN2,     KC_MS_BTN1

#define VANDALT_NOMOD_LAYER \
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, \
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, \
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, \
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_TRANSPARENT, KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, \
                                                    KC_BSPC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_SPACE
