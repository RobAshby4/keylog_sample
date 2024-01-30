#include <linux/input-event-codes.h>
#include <string.h>
#include "str_from_events.h"

void alloc_str_literal(const char *str, char **to) {
    *to = strndup(str, strlen(str));
}

// generate keycode string. i wish i knew a better way
char *keycode_to_str(unsigned short code) {
    char* key_string;
    switch (code) {
        case KEY_RESERVED: alloc_str_literal("RESERVED", &key_string); break;
        case KEY_ESC: alloc_str_literal("ESC", &key_string); break;
        case KEY_1: alloc_str_literal("1", &key_string); break;
        case KEY_2: alloc_str_literal("2", &key_string); break;
        case KEY_3: alloc_str_literal("3", &key_string); break;
        case KEY_4: alloc_str_literal("4", &key_string); break;
        case KEY_5: alloc_str_literal("5", &key_string); break;
        case KEY_6: alloc_str_literal("6", &key_string); break;
        case KEY_7: alloc_str_literal("7", &key_string); break;
        case KEY_8: alloc_str_literal("8", &key_string); break;
        case KEY_9: alloc_str_literal("9", &key_string); break;
        case KEY_0: alloc_str_literal("0", &key_string); break;
        case KEY_MINUS: alloc_str_literal("MINUS", &key_string); break;
        case KEY_EQUAL: alloc_str_literal("EQUAL", &key_string); break;
        case KEY_BACKSPACE: alloc_str_literal("BACKSPACE", &key_string); break;
        case KEY_TAB: alloc_str_literal("TAB", &key_string); break;
        case KEY_Q: alloc_str_literal("Q", &key_string); break;
        case KEY_W: alloc_str_literal("W", &key_string); break;
        case KEY_E: alloc_str_literal("E", &key_string); break;
        case KEY_R: alloc_str_literal("R", &key_string); break;
        case KEY_T: alloc_str_literal("T", &key_string); break;
        case KEY_Y: alloc_str_literal("Y", &key_string); break;
        case KEY_U: alloc_str_literal("U", &key_string); break;
        case KEY_I: alloc_str_literal("I", &key_string); break;
        case KEY_O: alloc_str_literal("O", &key_string); break;
        case KEY_P: alloc_str_literal("P", &key_string); break;
        case KEY_LEFTBRACE: alloc_str_literal("LEFTBRACE", &key_string); break;
        case KEY_RIGHTBRACE: alloc_str_literal("RIGHTBRACE", &key_string); break;
        case KEY_ENTER: alloc_str_literal("ENTER", &key_string); break;
        case KEY_LEFTCTRL: alloc_str_literal("LEFTCTRL", &key_string); break;
        case KEY_A: alloc_str_literal("A", &key_string); break;
        case KEY_S: alloc_str_literal("S", &key_string); break;
        case KEY_D: alloc_str_literal("D", &key_string); break;
        case KEY_F: alloc_str_literal("F", &key_string); break;
        case KEY_G: alloc_str_literal("G", &key_string); break;
        case KEY_H: alloc_str_literal("H", &key_string); break;
        case KEY_J: alloc_str_literal("J", &key_string); break;
        case KEY_K: alloc_str_literal("K", &key_string); break;
        case KEY_L: alloc_str_literal("L", &key_string); break;
        case KEY_SEMICOLON: alloc_str_literal("SEMICOLON", &key_string); break;
        case KEY_APOSTROPHE: alloc_str_literal("APOSTROPHE", &key_string); break;
        case KEY_GRAVE: alloc_str_literal("GRAVE", &key_string); break;
        case KEY_LEFTSHIFT: alloc_str_literal("LEFTSHIFT", &key_string); break;
        case KEY_BACKSLASH: alloc_str_literal("BACKSLASH", &key_string); break;
        case KEY_Z: alloc_str_literal("Z", &key_string); break;
        case KEY_X: alloc_str_literal("X", &key_string); break;
        case KEY_C: alloc_str_literal("C", &key_string); break;
        case KEY_V: alloc_str_literal("V", &key_string); break;
        case KEY_B: alloc_str_literal("B", &key_string); break;
        case KEY_N: alloc_str_literal("N", &key_string); break;
        case KEY_M: alloc_str_literal("M", &key_string); break;
        case KEY_COMMA: alloc_str_literal("COMMA", &key_string); break;
        case KEY_DOT: alloc_str_literal("DOT", &key_string); break;
        case KEY_SLASH: alloc_str_literal("SLASH", &key_string); break;
        case KEY_RIGHTSHIFT: alloc_str_literal("RIGHTSHIFT", &key_string); break;
        case KEY_KPASTERISK: alloc_str_literal("KPASTERISK", &key_string); break;
        case KEY_LEFTALT: alloc_str_literal("LEFTALT", &key_string); break;
        case KEY_SPACE: alloc_str_literal("SPACE", &key_string); break;
        case KEY_CAPSLOCK: alloc_str_literal("CAPSLOCK", &key_string); break;
        case KEY_F1: alloc_str_literal("F1", &key_string); break;
        case KEY_F2: alloc_str_literal("F2", &key_string); break;
        case KEY_F3: alloc_str_literal("F3", &key_string); break;
        case KEY_F4: alloc_str_literal("F4", &key_string); break;
        case KEY_F5: alloc_str_literal("F5", &key_string); break;
        case KEY_F6: alloc_str_literal("F6", &key_string); break;
        case KEY_F7: alloc_str_literal("F7", &key_string); break;
        case KEY_F8: alloc_str_literal("F8", &key_string); break;
        case KEY_F9: alloc_str_literal("F9", &key_string); break;
        case KEY_F10: alloc_str_literal("F10", &key_string); break;
        case KEY_NUMLOCK: alloc_str_literal("NUMLOCK", &key_string); break;
        case KEY_SCROLLLOCK: alloc_str_literal("SCROLLLOCK", &key_string); break;
        case KEY_KP7: alloc_str_literal("KP7", &key_string); break;
        case KEY_KP8: alloc_str_literal("KP8", &key_string); break;
        case KEY_KP9: alloc_str_literal("KP9", &key_string); break;
        case KEY_KPMINUS: alloc_str_literal("KPMINUS", &key_string); break;
        case KEY_KP4: alloc_str_literal("KP4", &key_string); break;
        case KEY_KP5: alloc_str_literal("KP5", &key_string); break;
        case KEY_KP6: alloc_str_literal("KP6", &key_string); break;
        case KEY_KPPLUS: alloc_str_literal("KPPLUS", &key_string); break;
        case KEY_KP1: alloc_str_literal("KP1", &key_string); break;
        case KEY_KP2: alloc_str_literal("KP2", &key_string); break;
        case KEY_KP3: alloc_str_literal("KP3", &key_string); break;
        case KEY_KP0: alloc_str_literal("KP0", &key_string); break;
        case KEY_KPDOT: alloc_str_literal("KPDOT", &key_string); break;
        case KEY_ZENKAKUHANKAKU: alloc_str_literal("ZENKAKUHANKAKU", &key_string); break;
        case KEY_102ND: alloc_str_literal("102ND", &key_string); break;
        case KEY_F11: alloc_str_literal("F11", &key_string); break;
        case KEY_F12: alloc_str_literal("F12", &key_string); break;
        case KEY_RO: alloc_str_literal("RO", &key_string); break;
        case KEY_KATAKANA: alloc_str_literal("KATAKANA", &key_string); break;
        case KEY_HIRAGANA: alloc_str_literal("HIRAGANA", &key_string); break;
        case KEY_HENKAN: alloc_str_literal("HENKAN", &key_string); break;
        case KEY_KATAKANAHIRAGANA: alloc_str_literal("KATAKANAHIRAGANA", &key_string); break;
        case KEY_MUHENKAN: alloc_str_literal("MUHENKAN", &key_string); break;
        case KEY_KPJPCOMMA: alloc_str_literal("KPJPCOMMA", &key_string); break;
        case KEY_KPENTER: alloc_str_literal("KPENTER", &key_string); break;
        case KEY_RIGHTCTRL: alloc_str_literal("RIGHTCTRL", &key_string); break;
        case KEY_KPSLASH: alloc_str_literal("KPSLASH", &key_string); break;
        case KEY_SYSRQ: alloc_str_literal("SYSRQ", &key_string); break;
        case KEY_RIGHTALT: alloc_str_literal("RIGHTALT", &key_string); break;
        case KEY_LINEFEED: alloc_str_literal("LINEFEED", &key_string); break;
        case KEY_HOME: alloc_str_literal("HOME", &key_string); break;
        case KEY_UP: alloc_str_literal("UP", &key_string); break;
        case KEY_PAGEUP: alloc_str_literal("PAGEUP", &key_string); break;
        case KEY_LEFT: alloc_str_literal("LEFT", &key_string); break;
        case KEY_RIGHT: alloc_str_literal("RIGHT", &key_string); break;
        case KEY_END: alloc_str_literal("END", &key_string); break;
        case KEY_DOWN: alloc_str_literal("DOWN", &key_string); break;
        case KEY_PAGEDOWN: alloc_str_literal("PAGEDOWN", &key_string); break;
        case KEY_INSERT: alloc_str_literal("INSERT", &key_string); break;
        case KEY_DELETE: alloc_str_literal("DELETE", &key_string); break;
        case KEY_MACRO: alloc_str_literal("MACRO", &key_string); break;
        case KEY_MUTE: alloc_str_literal("MUTE", &key_string); break;
        case KEY_VOLUMEDOWN: alloc_str_literal("VOLUMEDOWN", &key_string); break;
        case KEY_VOLUMEUP: alloc_str_literal("VOLUMEUP", &key_string); break;
        case KEY_POWER: alloc_str_literal("POWER", &key_string); break;
        case KEY_KPEQUAL: alloc_str_literal("KPEQUAL", &key_string); break;
        case KEY_KPPLUSMINUS: alloc_str_literal("KPPLUSMINUS", &key_string); break;
        case KEY_PAUSE: alloc_str_literal("PAUSE", &key_string); break;
        case KEY_SCALE: alloc_str_literal("SCALE", &key_string); break;
        default: key_string = strndup("oops", 4);
    }
     return key_string;
}

