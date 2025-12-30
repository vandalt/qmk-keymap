#define LAYOUT_WRAPPER(...) LAYOUT_LR(__VA_ARGS__)


enum layers {
    BASE,
    SYM,
    NAV,
    NUM,
    MEDIA,
    MOUSE,
    NOMOD
};

// Home row left
#define MT_A MT(MOD_LSFT, KC_A)
#define MT_S MT(MOD_LALT, KC_S)
#define MT_D MT(MOD_LCTL, KC_D)
#define MT_F LT(NAV, KC_F)
#define MT_G MT(MOD_RALT, KC_G)

// Home row right
#define MT_H LT(MOD_RALT, KC_H)
#define MT_J LT(NUM, KC_J)
#define MT_K MT(MOD_RCTL, KC_K)
#define MT_L MT(MOD_LALT, KC_L)
#define MT_SCLN MT(MOD_RSFT, KC_SCLN)

// Bottom row left
#define MT_Z MT(MOD_LCTL, KC_Z)
#define MT_X MT(MOD_LSFT, KC_X)
#define MT_V MT(MOD_LGUI, KC_V)
#define MT_B LT(MOUSE, KC_B)

// Bottom row right
#define MT_M MT(MOD_RGUI, KC_M)

// Thumbs
#define MT_ESC LT(SYM, KC_ESCAPE)
#define MT_SPACE LT(SYM, KC_SPACE)

// Top row
#define MT_E LT(MEDIA, KC_E)
#define MT_I LT(MEDIA, KC_I)

// Misc QMK keys
#define RGB_FWD RGB_MODE_FORWARD

#define VANDALT_BASE_LAYER \
    KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5,    KC_6, KC_7, KC_8,     KC_9,    KC_0,     KC_EQUAL, \
    KC_TAB,   KC_Q, KC_W, MT_E, KC_R, KC_T,    KC_Y, KC_U, MT_I,     KC_O,    KC_P,     KC_MINUS, \
    KC_BSPC,  MT_A, MT_S, MT_D, MT_F, MT_G,    MT_H, MT_J, MT_K,     MT_L,    MT_SCLN,  KC_QUOTE, \
    CW_TOGG,  MT_Z, MT_X, KC_C, MT_V, MT_B,    KC_N, MT_M, KC_COMMA, KC_DOT,  KC_SLASH, KC_ENTER, \
                       MT_ESC, KC_LEFT_GUI,    QK_REPEAT_KEY, MT_SPACE

#define VANDALT_SYM_LAYER \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  \
    _______, _______, _______, _______, _______, _______,    _______, KC_LCBR, KC_RCBR, _______, _______, KC_F12,  \
    _______, _______, _______, _______, _______, _______,    _______, KC_LBRC, KC_RBRC, _______, KC_BSLS, _______, \
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, KC_PIPE, _______, \
                                        _______, _______,      _______, KC_SPACE

#define VANDALT_NAV_LAYER \
    _______, _______,  _______, _______,  _______, _______,    _______, _______, _______, _______,  _______, _______, \
    _______, _______,  _______, _______,  _______, _______,    _______, _______, _______, _______,  _______, _______, \
    _______, MOD_LSFT, _______, MOD_LCTL, _______, _______,    KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_DEL,  _______, \
    _______, _______,  _______, _______,  _______, _______,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,   _______, _______, \
                                          QK_LLCK, _______,    _______, _______

#define VANDALT_NUM_LAYER \
    _______, _______,  _______, _______,  _______, _______,    _______, _______, _______, _______,  _______, _______, \
    _______, _______, KC_3,     KC_2,    KC_1,  _______,    _______, _______, _______, _______,  _______, _______, \
    _______, _______, KC_6,     KC_5,    KC_4, _______,    _______, _______, _______, _______,  _______, _______, \
    _______, KC_0,    KC_9,     KC_8,    KC_7,   _______,    _______, _______, _______, _______,   _______, _______, \
                                          QK_LLCK,  _______,   _______, _______


#define VANDALT_MEDIA_LAYER \
    QK_BOOT, RGB_SPI, RGB_FWD, _______, _______, RGB_VAI,    KC_VOLU, KC_MUTE, _______, _______,  _______, KC_PSCR, \
    _______, RGB_SPD, DT_DOWN, DT_UP,   DT_PRNT, RGB_VAD,    KC_VOLD, KC_MPRV, KC_MPLY, KC_MNXT,  KC_BRIU, _______, \
    _______, _______, _______, _______, _______, _______,    _______, _______, _______,  _______, KC_BRID, _______, \
    _______, RGB_HUD, RGB_HUI, _______, _______, _______,    _______, _______, _______, _______,   _______, _______, \
                                        TG(NOMOD), RGB_TOG,    _______, _______


#define VANDALT_MOUSE_LAYER \
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______,  _______, _______, \
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______,  _______, _______, \
    _______, _______, _______, _______, _______, _______,    MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, _______, _______, \
    _______, _______, _______, _______, _______, _______,    MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR,  _______, _______, \
                                        _______, _______,    MS_BTN2, MS_BTN1


#define VANDALT_NOMOD_LAYER \
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, \
    _______, KC_A,    KC_S,    KC_D,    KC_F,    _______,    _______, KC_J,    KC_K,    KC_L,    KC_SCLN, _______, \
    _______, KC_Z,    KC_X,    _______, KC_V,    _______,    _______, KC_M,    _______, _______, _______, _______, \
                                        KC_BSPC, _______,    _______, KC_SPACE
