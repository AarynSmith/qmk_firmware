#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define UNICODE_SELECTED_MODES UC_MAC

#undef  PRODUCT
#define PRODUCT         Aaryn_Ortho_4x12

// #undef MATRIX_ROW_PINS
// #undef MATRIX_COL_PINS
/* pro_micro pin-out
    Rearranged to accommodate speaker on B5
*/
//                        RXI  2   3   4
// #define MATRIX_ROW_PINS { D2, D1, D0, D4 }
//                         5   6   7   8  10  16  14  15  A0  A1  A2  A3
// #define MATRIX_COL_PINS { C6, D7, E6, B4, B6, B2, B3, B1, F7, F6, F5, F4 }
#define AUDIO_PIN C6
#define AUDIO_PIN_ALT B5
#define RGB_DI_PIN D3

#define RGBLED_NUM 10
// #define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_VAL 128
