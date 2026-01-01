/* Copyright 2015-2017 Jack Humbert
 * Updated 2020 mixedfeelings
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define LOWER  FN_MO13
#define RAISE  FN_MO23

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
    * ,-----------------------------------------------------------------------------------.
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      | Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |
    * `-----------------------------------------------------------------------------------'
    */
    [0] =  LAYOUT_ortho_4x12 (
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH,
        KC_NO,   KC_LCTL, KC_LALT, KC_LGUI, LOWER, KC_SPC, KC_SPC, RAISE, KC_LEFT,
    ),

    /* Lower
    * ,-----------------------------------------------------------------------------------.
    * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      | Next | Vol- | Vol+ |
    * `-----------------------------------------------------------------------------------'
    */
    [1] = LAYOUT_ortho_4x12 (
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN,
        KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR,
        KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_MNXT,
    ),

    /* Raise
    * ,-----------------------------------------------------------------------------------.
    * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      | Next | Vol- | Vol+ |
    * `-----------------------------------------------------------------------------------'
    */
    [2] = LAYOUT_ortho_4x12 (
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
        KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT,
    ),

    /* Utility
    * ,-----------------------------------------------------------------------------------.
    * |      |QK_BOOT |DEBUG |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
    [3] = LAYOUT_ortho_4x12 (
        KC_TRNS, QK_BOOT,   DEBUG,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    )

};
void reset_leds(void) {
    writePinLow(LED_PIN_1);
    writePinHigh(LED_PIN_2);
}

void keyboard_post_init_user(void) {
    setPinOutput(LED_PIN_1);
    setPinOutput(LED_PIN_2);

    reset_leds();
}

bool is_standard_led_mode = true;
bool is_mod_led_active = false;
bool is_playing_turbo_animation = false;

int  pressed_keys = 0;

void handle_pressed_led(void) {
    if (is_standard_led_mode) {
        if (pressed_keys > 0) {
            writePinHigh(LED_PIN_1);
            writePinLow(LED_PIN_2);
        } else {
            writePinLow(LED_PIN_1);
            writePinHigh(LED_PIN_2);

        }
    }
}

int turbo_counter = 0;
static uint16_t turbo_timer;

void run_turbo_animation (void) {
    if (is_playing_turbo_animation) {
        if (timer_elapsed(turbo_timer) > 200) {
            if (turbo_counter >= 6) {
                turbo_counter = 1;
            } else {
                turbo_counter++;
            }
            turbo_timer = timer_read();
        }

        reset_leds();
    } else {
        turbo_counter = 0;
    }

    switch (turbo_counter) {
        case 0:
            if (!is_mod_led_active) reset_leds();
            break;
        case 1:
        case 3:
        case 5:
            writePinHigh(LED_PIN_1);
            break;
        case 2:
        case 4:
        case 6:
            writePinLow(LED_PIN_2);
            break;
    }
}

void matrix_scan_user(void) {
    run_turbo_animation();
    handle_pressed_led();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool pressed = record->event.pressed;

    if (pressed) {
        pressed_keys++;
    } else {
        pressed_keys--;
    }

    if (pressed_keys < 0) pressed_keys = 0;

    if (get_current_wpm() > 100) {
        is_playing_turbo_animation = true;
        is_standard_led_mode       = false;
    } else {
        is_playing_turbo_animation = false;
        is_standard_led_mode       = true;
    }

    return true;
}