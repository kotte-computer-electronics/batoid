#include "kb.h"
#include "keymap_swedish_pro_osx_iso.h"

#define _BASE 0
#define _LWR 1
#define _RSE 2
#define _MOD 3

#define K_CPS LT(_MOD, KC_TAB)
#define K_MODQ LT(_MOD, SE_QUOT)
#define K_BSLS SE_BSLS
#define K_LESS KC_GRV
#define K_GRTR S(K_LESS)
#define K_LCBR SE_LCBR
#define K_RCBR SE_RCBR
#define K_LBRC SE_LBRC
#define K_AA KC_LBRC
#define K_AE KC_QUOT
#define K_OE KC_SCLN
#define K_PSCR SAFE_RANGE
#define K_PIPE LALT(KC_7)

};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
		//       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
                  KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,             KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     K_AA,
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //   ┌───┴─────────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐     └─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
              K_CPS,          KC_A,     KC_S,     KC_D,     KC_F,     KC_G,             KC_H,     KC_J,     KC_K,     KC_L,     K_OE,     K_AE,
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
        //┌─────────────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐  └────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
           KC_LSFT,      MO(_RSE),  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,             KC_N,     KC_M,     KC_COMM,  KC_DOT,  SE_MINS,   KC_SFTENT,
        //|             |         |         |         |         |         |         |       |         |         |         |
        //└────┬────────┴────┬────┴─────────┴─┬───────┴────┬────┴─────────┴────┬────┘ ┌─────┴─────────┴────┬────┴────┬────┴─────────┼─────────┴────┬────┘
        //     |             |                |            |                   |      |                    |         |              |              |
                KC_LALT,                       KC_LGUI,     LT(_LWR, KC_SPC),          LT(_RSE, KC_SPC),    KC_BSPC,                 KC_LCTL
        //     |                              |            |                   |      |                    |         |              |              |
        //     └─────────────┘                └────────────┴───────────────────┘      └────────────────────┴─────────┘              └──────────────┘
    )
    
};
