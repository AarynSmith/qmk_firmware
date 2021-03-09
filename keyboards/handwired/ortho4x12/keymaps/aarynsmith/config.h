#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define UNICODE_SELECTED_MODES UC_MAC

#undef  PRODUCT
#define PRODUCT         Aaryn_Ortho_4x12

#undef MATRIX_ROWS
#undef MATRIX_COLS
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* pro_micro pin-out */
//                        RXI  2   3   4   6   7
#define MATRIX_COL_PINS { D2, D1, D0, D4, D7, E6 }
//                        A3, A2, A1, A0, 15, 14, 16, 10
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

#define AUDIO_PIN C6
#define AUDIO_PIN_ALT B5
#define RGB_DI_PIN D3

#define RGBLED_NUM 10
// #define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_VAL 128
