#include <stdio.h>

void init(int* buf, int buf_size);
void move(int* buf, int** indexer, int size);

int main(int argc, char* argv[]) {
  printf("Circular buffer\n");
  int buffer[255]; // what does this mean in terms of the maximum size for our ring buffer?
  
  // Read the length of the buffer from argv (hint: remember index 0 is the program name)

  // initialize the buffer with the correct length

  return 0;
}

void init(int* buf, int count) {
  for(int i = 0; i < count; i++) {
    buf[i] = 0;
  }
}

void move(int* buf, int** indexer, int size) {
  // Add the implementation
}
