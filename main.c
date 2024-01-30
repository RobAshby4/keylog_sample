#include <stdio.h>
#include <stdbool.h>
#include <linux/input-event-codes.h>
#include "str_from_events.h"
#include <linux/input.h>

#define INTERFACE "/dev/input/event0"

int main(int argc, char** argv) {
    FILE *fp = fopen(INTERFACE, "r");
    struct input_event keystroke;

    size_t bytes_read;
    while ((bytes_read = fread(&keystroke, sizeof(struct input_event), 1, fp)) != 0) {
        if (keystroke.type == 1 && keystroke.value == 1) {
            printf("%s\n", keycode_to_str(keystroke.code));
        }
    }
}

