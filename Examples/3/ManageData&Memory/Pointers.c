#include <stdio.h>

main() {

    int number1, number2 = 10;
    // pointer is a variable that contains a memory address
    int my_int = 10; // declare and assign
    int *ptr = &my_int; 

    // to declare a pointer we use the star (*) operator
    int *pointer1;
    int* pointer2;

    // to initialize a pointer use the "&" operator
    pointer1 = &number2;

    pointer2 = (int*)malloc(sizeof(int));

    // dereference the pointer (ie exracting the value stored at the memory address)
    number1 = *pointer1; // extract the value at the pointer location pointer1
    *pointer2 = 50; // change the value in memory at address location pointer2

    // create a storage place for 4 integers on the heap
    int *my_ptr = (int*)malloc(4*sizeof(int));
    // the pointer returned from malloc, collac, realloc is the address at the beginning of the block

    free(my_ptr); // free memory 

    // Why use pointers?
    // - pointers help optimize data structure performance
    // - allows for passing values by reference
    // - dynamic memory management
    
    // pass by value
     int num = 10;
     add_one(num); // num is still 10...input = 11 

    // pass by reference
    add_one(&num); // makes a copy of the reference...still not quite right

    //pass by reference
    add_one_ref(&num); // now we get the expected num = 1

    // pointer pointer
    // multidemensional array love
    // arrays of chracter strings
} 

void add_one(int input) {
    input + 1;
}

void add_one_ref(int *input) {
    *input = *input + 1;
}