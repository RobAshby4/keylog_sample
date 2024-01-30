#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <linux/input-event-codes.h>
#include "str_from_events.h"


#define INTERFACE "/dev/input/event0"

typedef struct input_event {
	struct timeval time;
	unsigned short type;
	unsigned short code;
	unsigned int value;
} input_event;

int main(int argc, char** argv) {
    FILE *fp = fopen(INTERFACE, "r");
    input_event keystroke;

    size_t bytes_read;
    while ((bytes_read = fread(&keystroke, sizeof(input_event), 1, fp)) != 0) {
        if (keystroke.type == 1 && keystroke.value == 1)
        printf("type:%d code:%d value:%d\n", keystroke.type, keystroke.code, keystroke.value);
        // TODO: Translate keycodes to string
    }
}

