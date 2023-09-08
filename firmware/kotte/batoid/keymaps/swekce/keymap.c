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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = KEYMAP(
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
    ),
    [_RSE] = KEYMAP(
		//       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
                  XXXXXXX,  SE_DLR,   SE_AT,    KC_TILDE, SE_EURO,  K_PIPE,           SE_RBRC,  K_GRTR,   SE_RPRN,  K_RCBR,   SE_EQL,   SE_PLUS,
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //   ┌───┴─────────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐     └─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
              XXXXXXX,        SE_EXLM,  SE_DQUO,  SE_HASH,  SE_AMPR,  SE_PERC,          K_LBRC,   K_LESS,   SE_LPRN,  K_LCBR,   SE_GRV,   SE_QUOT,
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
        //┌─────────────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐  └────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
           _______,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,          K_BSLS,   SE_SLSH,  SE_SCLN,  SE_COLN,  SE_UNDS,  _______,
        //|             |         |         |         |         |         |         |       |         |         |         |
        //└────┬────────┴────┬────┴─────────┴─┬───────┴────┬────┴─────────┴────┬────┘ ┌─────┴─────────┴────┬────┴────┬────┴─────────┼─────────┴────┬────┘
        //     |             |                |            |                   |      |                    |         |              |              |
                _______,                       _______,     _______,                   _______,             _______,                 RESET
        //     |                              |            |                   |      |                    |         |              |              |
        //     └─────────────┘                └────────────┴───────────────────┘      └────────────────────┴─────────┘              └──────────────┘
    ),
    [_LWR] = KEYMAP(
		//       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
                  XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,            XXXXXXX,  KC_1,     KC_2,     KC_3,     XXXXXXX,  XXXXXXX,
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //   ┌───┴─────────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐     └─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
              _______,        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,           XXXXXXX,  KC_4,     KC_5,     KC_6,     KC_0,     XXXXXXX,
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
        //┌─────────────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐  └────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
           _______,      XXXXXXX,  KC_F11,   KC_F12,   XXXXXXX,  XXXXXXX,  XXXXXXX,          XXXXXXX,  KC_7,     KC_8,     KC_9,     XXXXXXX,  XXXXXXX,
        //|             |         |         |         |         |         |         |       |         |         |         |
        //└────┬────────┴────┬────┴─────────┴─┬───────┴────┬────┴─────────┴────┬────┘ ┌─────┴─────────┴────┬────┴────┬────┴─────────┼─────────┴────┬────┘
        //     |             |                |            |                   |      |                    |         |              |              |
                _______,                       _______,     _______,                   KC_SPC,             _______,                 _______
        //     |                              |            |                   |      |                    |         |              |              |
        //     └─────────────┘                └────────────┴───────────────────┘      └────────────────────┴─────────┘              └──────────────┘
    ),
    [_MOD] = KEYMAP(
		//       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
                  XXXXXXX,  KC_MPLY,  KC_MRWD,  KC_MFFD,  XXXXXXX,  XXXXXXX,          XXXXXXX,  XXXXXXX,  KC_UP,    XXXXXXX,  XXXXXXX,  XXXXXXX,
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //   ┌───┴─────────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐     └─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
              _______,        KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  XXXXXXX,          XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RGHT,  XXXXXXX,  XXXXXXX,
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
        //┌─────────────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐  └────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
           _______,      XXXXXXX,  XXXXXXX,  KC_BRID,  KC_BRIU,  XXXXXXX,  XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        //|             |         |         |         |         |         |         |       |         |         |         |
        //└────┬────────┴────┬────┴─────────┴─┬───────┴────┬────┴─────────┴────┬────┘ ┌─────┴─────────┴────┬────┴────┬────┴─────────┼─────────┴────┬────┘
        //     |             |                |            |                   |      |                    |         |              |              |
                _______,                       _______,     _______,                   _______,             _______,                 _______
        //     |                              |            |                   |      |                    |         |              |              |
        //     └─────────────┘                └────────────┴───────────────────┘      └────────────────────┴─────────┘              └──────────────┘
    )
};

void reset_leds(void) {
    writePinLow(LED_PIN_L);
    writePinLow(LED_PIN_R);
}

bool is_standard_led_mode      = true;
bool is_mod_led_active         = false;

bool is_playing_turbo_animation    = false;
int current_turbo_animation_frame = 0;
static uint16_t turbo_animation_frame_timer;

void run_turbo_animation(void) {
    if (is_playing_turbo_animation) {
        if (timer_elapsed(turbo_animation_frame_timer) > 100) {
            if (current_turbo_animation_frame >= 6) {
                current_turbo_animation_frame = 1;
            } else {
                current_turbo_animation_frame++;
            }
            // reset timer
            turbo_animation_frame_timer = timer_read();
        }

        reset_leds();

        switch (current_turbo_animation_frame) {
            case 0:
                if (!is_mod_led_active) reset_leds();
                break;
            case 1:
            case 3:
            case 5:
                writePinHigh(LED_PIN_L);
                writePinLow(LED_PIN_R);
                break;
            case 2:
            case 4:
            case 6:
                writePinHigh(LED_PIN_R);
                writePinLow(LED_PIN_L);
                break;
        }
    } else {
        current_turbo_animation_frame = 0;
    }
}

bool is_playing_idle_animation = true;
int current_idle_animation_frame = 0;
static uint16_t idle_animation_frame_timer;
static uint16_t idle_animation_start_timer;

void run_idle_animation_timer(void) {
    if (idle_animation_start_timer && timer_expired(timer_read(), idle_animation_start_timer)) {
        is_playing_idle_animation = true;
        idle_animation_start_timer = 0;
    }
}

void run_idle_animation(void) {
    if (is_playing_idle_animation) {
        is_standard_led_mode      = false;
        is_playing_turbo_animation = false;

        if (timer_elapsed(idle_animation_frame_timer) > 80) {
            if (current_idle_animation_frame >= 200) {
                current_idle_animation_frame = 1;
            } else {
                current_idle_animation_frame++;
            }

            idle_animation_frame_timer = timer_read();
        }
        reset_leds();

        switch (current_idle_animation_frame) {
            case 0:
                if (!is_mod_led_active) reset_leds();
                break;
            case 21:
            case 51:
            case 53:
                writePinHigh(LED_PIN_L);
                writePinHigh(LED_PIN_R);
                break;
            case 22:
            case 52:
            case 54:
                writePinLow(LED_PIN_L);
                writePinLow(LED_PIN_R);
        }
    } else {
        current_idle_animation_frame = 0;
    }
}

int pressed_keys = 0;
int active_led   = LED_PIN_L;

void handle_pressed_led(void) {
    if (is_standard_led_mode) {
        if (pressed_keys > 0) {
            writePinHigh(active_led);
        } else {
            writePinLow(LED_PIN_L);
            writePinLow(LED_PIN_R);
        }
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool pressed = record->event.pressed;

    if (pressed) {
        is_playing_idle_animation = false;
        is_standard_led_mode      = true;
    }

    if (get_current_wpm() > 70) {
        is_playing_turbo_animation = true;
        is_standard_led_mode       = false;
        is_playing_idle_animation  = false;
    }

    if (is_standard_led_mode) {
        if (record->event.key.col > 5) {
            active_led = LED_PIN_L;
        } else {
            active_led = LED_PIN_R;
        }
    }


    if (pressed) {
        pressed_keys++;
    } else {
        pressed_keys--;
    }

    if (pressed_keys < 0) pressed_keys = 0;

    idle_animation_start_timer = (record->event.time + 1000) | 1;

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (biton32(state)) {
        case _LWR:
            is_mod_led_active = true;
            pressed_keys--;
            writePinHigh(LED_PIN_L);
            writePinLow(LED_PIN_R);
            break;

        case _RSE:
            is_mod_led_active = true;
            pressed_keys--;
            writePinHigh(LED_PIN_R);
            writePinLow(LED_PIN_L);
            break;

        case _MOD:
            is_mod_led_active = true;
            pressed_keys--;
            writePinLow(LED_PIN_L);
            writePinLow(LED_PIN_R);
            break;

        default:
            is_mod_led_active = false;
            writePinLow(LED_PIN_L);
            writePinLow(LED_PIN_R);
            break;
    }
    return state;
}

/*  do this later when im a big boy and know C
class Animator {
    bool            is_playing     = false;
    int             current_frame  = 0;
    int             total_frames   = 0;
    int             frame_duration = 0;
    int             start_after    = 0;
    void            frame_function;
    static uint16_t frame_timer;
    static uint16_t start_timer;

    Animator(int tf, int fd, void ff, int sa) {
        total_frames   = tf;
        frame_duration = fd;
        frame_function = ff;
        start_after    = sa;
    }

    void loop() {
        if (is_playing) {
            if (timer_elapsed(frame_timer) > frame_duration) {
                if (current_frame >= total_frames) {
                    current_frame = 1;
                } else {
                    current_frame++;
                }
                // reset timer
                frame_timer = timer_read();
            }

            reset_leds();
        } else {
            current_frame = 0;
        }

        frame_function(current_frame);
    }

    void start() {
        is_playing = true;
    }

    void stop() {
        is_playing = false;
    }
}

void my_frame_function (int current_frame) {
    switch (current_frame) {
        case 0:
            if (!is_mod_led_active) reset_leds();
            break;
        case 1:
        case 3:
        case 5:
            writePinHigh(LED_PIN_L);
            break;
        case 2:
        case 4:
        case 6:
            writePinHigh(LED_PIN_R);
            break;
    }
}

*/

void keyboard_post_init_user(void) {
    setPinOutput(LED_PIN_L);
    setPinOutput(LED_PIN_R);

    reset_leds();
}

void matrix_scan_user(void) {
    run_turbo_animation();
    run_idle_animation_timer();
    run_idle_animation();
    handle_pressed_led();
}
