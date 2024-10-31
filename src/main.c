#include <stdlib.h>
#include <stdio.h>

void init(int* buf, int buf_size);
void move(int* buf, int** indexer, int size);

// modify this code to solve the exercise
int main(int argc, char* argv[]) {

  int buffer[255]; // what does this mean in terms of the maximum size for our ring buffer?

  for(int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

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
