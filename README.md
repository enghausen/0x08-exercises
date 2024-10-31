# Lecture 09 Exercises

## Exercise 0x00 Circular buffer with arrays
A circular buffer (also known as ring buffers or cyclic buffers) works like a normal list, except that if the number of values exceeds the capacity of the buffer, the oldest value will be overwritten. Circular buffers are widely used in real-world scenarios, like logging, where older entries are overwritten to save disk space, or data streaming, where data is continuously produced and consumed (like when we're watching Netfilx, Twitch or YouTube). 

The task is to write a program in C that implements a circular buffer, that can contain a number of integer values.

### Requirements
- The program shall accept an arbitrary (between 0 and 255) number of arguments where
  - the value at index 1 specifies the size of the buffer (how many values it can hold)
  - any subsequent arguments will be stored in the buffer (initialization)
- If maximum capacity is reached
  - values should be overwritten according to the first-in-first-out (FIFO) principle (always the oldest value)
- The content of the array shall be displayed whenever a value is added (printed to the standard output)

Since we're working with arguments to `main()`, we'll have to set those in VSCode. To set command-line arguments in VSCode, go to `launch.json` and find `"args"` (line 9) and inspect the values. We've seeded the configuration with some data, but you're welcome to change it. You can also call the program from a terminal as shown below:

##### Example output
```
$ ./main-array.o 4 1 2 3 4 5 6
1 0 0 0
1 2 0 0
1 2 3 0
1 2 3 4
5 2 3 4
5 6 3 4
```

##### Handout
It might be a good idea to initialize the array to make it easier read the output, here is a function that does that
```c
void init(int* array, int count) {
  for(int i = 0; i < count; i++) {
    array[i] = 0;
  }
}
```

_**Hint** The first arguments is always the executable name_

_**Hint** It is probably not a good idea to use the subscript operator (`[]`) when reading and writing values in the buffer_

## Exercise 0x01 – Add new values
Extend the program from [Exercise 0x00](#exercise-0x00-circular-buffer-with-arrays) to prompt the user to enter new integers in an infinite loop.

##### Example output
```
$ ./main-array.o 8 1 2 3 4 5 6 7     
1 0 0 0 0 0 0 0 
1 2 0 0 0 0 0 0 
1 2 3 0 0 0 0 0 
1 2 3 4 0 0 0 0 
1 2 3 4 5 0 0 0 
1 2 3 4 5 6 0 0 
1 2 3 4 5 6 7 0 
Enter next value: 8
1 2 3 4 5 6 7 8 
Enter next value: 9
9 2 3 4 5 6 7 8 
Enter next value: 10
9 10 3 4 5 6 7 8 
Enter next value: 
```

_**Hint** Don't bother thinking about non-integer inputs, we'll assume we have nice users who will always input integers!_