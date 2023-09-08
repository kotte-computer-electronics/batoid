#include "kb.h"

#define _BASE 0
#define _LWR 1
#define _RSE 2
#define _MOD 3

enum my_keycodes {
  K_PIN_1 = SAFE_RANGE,
  K_PIN_2,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = KEYMAP(
		//       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
                  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,             KC_Y,     KC_U,     KC_I,     KC_O,    KC_P,      KC_BSPC,
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //   ┌───┴─────────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐     └─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
              KC_LCTL,        KC_A,     KC_S,     KC_D,     KC_F,     KC_G,             KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
        //┌─────────────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐  └────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
           KC_LSFT,      KC_LCTL,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,             KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ESC,
        //|             |         |         |         |         |         |         |       |         |         |         |
        //└────┬────────┴────┬────┴─────────┴─┬───────┴────┬────┴─────────┴────┬────┘ ┌─────┴─────────┴────┬────┴────┬────┴─────────┼─────────┴────┬────┘
        //     |             |                |            |                   |      |                    |         |              |              |
                KC_LGUI,                       MO(_LWR),    KC_SPC,                    KC_ENT,              MO(_RSE),                KC_RALT
        //     |                              |            |                   |      |                    |         |              |              |
        //     └─────────────┘                └────────────┴───────────────────┘      └────────────────────┴─────────┘              └──────────────┘
    ),
    [_RSE] = KEYMAP(
		//       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
                  KC_TAB,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,          KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_BSPC,
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //   ┌───┴─────────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐     └─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
              KC_LCTL,        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,          KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_GRV,
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
        //┌─────────────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐  └────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
           KC_LSFT,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,          KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_TILD,
        //|             |         |         |         |         |         |         |       |         |         |         |
        //└────┬────────┴────┬────┴─────────┴─┬───────┴────┬────┴─────────┴────┬────┘ ┌─────┴─────────┴────┬────┴────┬────┴─────────┼─────────┴────┬────┘
        //     |             |                |            |                   |      |                    |         |              |              |
                KC_LGUI,                       MO(_MOD),    KC_SPC,                    KC_ENT,              _______,                 KC_RALT
        //     |                              |            |                   |      |                    |         |              |              |
        //     └─────────────┘                └────────────┴───────────────────┘      └────────────────────┴─────────┘              └──────────────┘
    ),
    [_LWR] = KEYMAP(
		//       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
                  KC_TAB,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,             KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSPC,
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //   ┌───┴─────────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐     └─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
              KC_LCTL,        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,          KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, XXXXXXX,  XXXXXXX,
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
        //┌─────────────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐  └────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
           KC_LSFT,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        //|             |         |         |         |         |         |         |       |         |         |         |
        //└────┬────────┴────┬────┴─────────┴─┬───────┴────┬────┴─────────┴────┬────┘ ┌─────┴─────────┴────┬────┴────┬────┴─────────┼─────────┴────┬────┘
        //     |             |                |            |                   |      |                    |         |              |              |
                KC_LGUI,                       _______,     KC_SPC,                    KC_ENT,              MO(_MOD),                KC_RALT
        //     |                              |            |                   |      |                    |         |              |              |
        //     └─────────────┘                └────────────┴───────────────────┘      └────────────────────┴─────────┘              └──────────────┘
    ),
    [_MOD] = KEYMAP(
		//       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐       ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
                  QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        //       |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //   ┌───┴─────────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐     └─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┬───────┴─┐
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
              XXXXXXX,        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,
        //   |               |         |         |         |         |         |       |         |         |         |         |         |         |
        //┌─────────────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐  └────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┐
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
            XXXXXXX,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,
        //|             |         |         |         |         |         |         |       |         |         |         |         |         |         |
        //└────┬────────┴────┬────┴─────────┴─┬───────┴────┬────┴─────────┴────┬────┘ ┌─────┴─────────┴────┬────┴────┬────┴─────────┼─────────┴────┬────┘
        //     |             |                |            |                   |      |                    |         |              |              |
                XXXXXXX,                       _______,     XXXXXXX,                   XXXXXXX,             _______,                 RESET
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
            if (current_idle_animation_frame >= 300) {
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
