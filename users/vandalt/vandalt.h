#pragma once

extern const uint16_t PROGMEM cv_media_combo[];
extern const uint16_t PROGMEM mcomma_media_combo[];

#define VANDALT_COMBOS \
    COMBO(cv_media_combo, MO(MEDIA)), \
    COMBO(mcomma_media_combo, MO(MEDIA)),
