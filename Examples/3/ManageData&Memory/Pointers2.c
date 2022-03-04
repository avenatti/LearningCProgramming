#include <stdio.h>

/* Function pointer is a specific type of pointer that contains 
   the beginning addres of a function */

 // - function pointers make it possible to call functions dynmaically at runtime
 // - asynrounous code and multithreading
 // - function pointers can help us establish an API in C

 int (*func_ptr)(int, int);
 int multiply(int a, int b) {
     return a * b;
 }

 func_ptr = &multiply;

 // pointer arithmetic and function pointers were not covered in enough detail or with
 // enough reinforcement. I need more resources... something with hands-on labs :/