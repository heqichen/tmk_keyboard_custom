#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |ESC|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Bsp|Del|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L| ; |  '|Enter  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |PUp|
     * |-----------------------------------------------------------|
     * |LCtl| Fn |Alt|      Space             | Win|  |Alt Fn |RCtl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_HQC(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, DEL, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,PGUP,       \
        LCTL,FN0, LALT,          SPC,                     RGUI,RALT,FN0, RCTL),
    /* 1: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Bsp|Del|
     * |-----------------------------------------------------------|
     * |     |MWU|MUp |MWD|   |   |   |Hom|End|PgU|PgD|   |   |    |
     * |-----------------------------------------------------------|
     * |      |MLe|MDo|MRi|VoD|VoU|Lef|Dow|Up |Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |MLB|MMB|MRB|BAK|FWD| [ | ] |Bsp|Del|   |      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HQC(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,TRNS,  \
        TRNS,WH_U,MS_U,WH_D,TRNS,TRNS,TRNS,HOME,END ,PGUP,PGDN,TRNS,TRNS,TRNS,      \
        TRNS,MS_L,MS_D,MS_R,_VOLDOWN,_VOLUP,LEFT,DOWN,UP  ,RIGHT,TRNS,TRNS,    TRNS,      \
        TRNS,BTN1,BTN3,BTN2,WBAK,WFWD,LBRC,RBRC,BSPC,DEL, TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS)
};


const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};

#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif
