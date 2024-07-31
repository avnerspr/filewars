#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFLEN (1000)

typedef enum mission {
    NOTHING = 1,
    HOLD,
    ADD,
    TIME,
    PING,
    WRITE,
    LS,
} miss_t;

int parse_mission() {
    char message_buffer[BUFFLEN] = {0};
    int ret = read(STDIN_FILENO, message_buffer, BUFFLEN - 1);
    if (ret >= BUFFLEN - 1) {
        // SOMETHING
    }
    miss_t m = NOTHING;
    if (strcmp(message_buffer, "nothing") == 0) {
        m = NOTHING;
    }
    else if (strcmp(message_buffer, "hold") == 0) {
        m = HOLD;
    }

    else if (strcmp(message_buffer, "add") == 0) {
        m = ADD;
    }
    else if (strcmp(message_buffer, "time") == 0) {
        m = TIME;
    }
    else if (strcmp(message_buffer, "ping") == 0) {
        m = PING;
    }
    else if (strcmp(message_buffer, "nothing") == 0) {
        m = WRITE;
    }
    else if (strcmp(message_buffer, "nothing") == 0) {
        m = LS;
    }
}


int main(int argc, char* atgv[]) {
    
}