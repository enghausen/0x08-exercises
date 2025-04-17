#include <stdio.h>
#include <stdlib.h>

void init(int* buf, int count);
void printBuffer(int* start, int size);

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <buffer_size> [values...]\n", argv[0]);
        return 1;
    }

    // Buffer size from first argument
    int buf_size = atoi(argv[1]);
    if (buf_size <= 0 || buf_size > 255) {
        printf("Invalid buffer size.\n");
        return 1;
    }

    int buffer[255]; // max buffer
    init(buffer, buf_size);

    // Circular buffer pointers
    int* start = buffer;
    int* end = buffer + buf_size;
    int* current = buffer;

    // Fill initial values from argv[2] onward
    for (int i = 2; i < argc; i++) {
        int val = atoi(argv[i]);
        *current = val;
        printBuffer(buffer, buf_size);

        current++;
        if (current == end) {
            current = start;
        }
    }

    // Prompt user for new input
    while (1) {
        int val;
        printf("Enter next value: ");
        scanf("%d", &val);

        *current = val;
        printBuffer(buffer, buf_size);

        current++;
        if (current == end) {
            current = start;
        }
    }

    return 0;
}

void init(int* buf, int count) {
    for (int i = 0; i < count; i++) {
        buf[i] = 0;
    }
}

void printBuffer(int* buf, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", buf[i]);
    }
    printf("\n");
}
