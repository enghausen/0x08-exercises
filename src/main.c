#include <stdlib.h>
#include <stdio.h>

void init(int* buf, int buf_size);

int main(int argc, char* argv[]) {

  int buffer[255]; 
  // init buffer with a for loop and [] operator

  // declare three pointers: start, current, end

  // while true
    // take input from user
    // update the value that current points to input
    // if current is not at the end
      // current = current + 1
    // else
      //current = start    
    // print buffer 

  return 0;
}

void init(int* buf, int count) {
  for(int i = 0; i < count; i++) {
    buf[i] = 0;
  }
}