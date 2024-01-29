#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
    while (1) {
        size_t bytes_read;
        bytes_read = fread(&keystroke, sizeof(input_event), 1, fp);
        if (bytes_read > 0) {
            printf("type:%d code:%d value:%d\n", keystroke.type, keystroke.code, keystroke.value);
        }
    }
}

