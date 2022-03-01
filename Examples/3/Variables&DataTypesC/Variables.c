#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void main() {

    // variable naming 
    // names can have alpha, numeric, and underscores
    // cannot start with a digit
    // no whitespace (duh) in name
    // do not use reserved words
    // variable names are case sensative


    int x = 1;
    // integer
    // signed and unsigned
    // short and long
    // fixed-width integers (based on cert hardware...cpu architecture) --> <stdint.h> and <inttypes.h> (C99)
    // exact width int...min width int...fastest minimum width...8 to 64 bit
    // bit --> unsigned int age : 7;  instead of 32 bit


    // increment / decrement - pre/post fix can make a big difference
    // increment++
    // ++prefix increment
    // decrement--
    // --prefix decrement

    // bitwise operators
    // (&) AND compares bits and returns 1 if boht bits are one, else 0
    // (|) OR comapres bits and returns 1 is either of the bits is one, else 0
    // (^) XOR compares bits and returns 1 only if 1 of the bits is one, else 0
    // (~) NOT flips bits, converting 1= 0 0=1
    // (<<) left shift move bits to the left N positions
    // (>>) right shift move bits to the right N positions

    // assigment operators
    // = assign left
    // += adds right and left, assigns to left
    // -= subtracts right from left, assigns left
    // *= multiplies right and left, assigns left
    // /= divides right from left, assigns left
    // %= modulus, assigns left

    // bitwise + assignment
    // &=, ...


    float x = 3.0; // 4 bytes (8 bits in every byte)
    double x = 3.0; // 8 bytes
    long double x = 3.0; // 8 bytes
    // floats


    // char
    // signed and unsigned
    // A = 65, Z = 90
    // relies on ASCII table mapping


    // boolean
    // added in C99
    // <stdbool.h>


    // enumeration - a list of items represented as numbers


    // Void 


    // complex types
    // <complex.h>
    // x + yi ----> 3.0 + 4.0 * _Complex_I


    /* array - a collection of values with the same type 
    represented by a single name and an index that allows the selction of specific members */
    int numbers[5] = {0,1,2,3,4};
    // int y = numbers[0]; selecting the first element
    // multi-demensional arrays
    int arr[10][4][2];
    // C does not support a variable as a demension for an array. the value must be constant.


    /* pointer - a type whose value is the address of another variable. the memory location 
    where the variable is stored. */
    float var_int = 5;
    float *p = &var_int;
    printf("%f\n", p); // address of value
    printf("%f\n", *p); // value of pointer p


    /* structure represents a collection of members (variables) of possibly different 
    types stored in  a single userdefined type */
    struct  address
    {
        char name[100];
        char street[100];
        char state[25];
    };
    struct address add1 = {"Bernard", "123 Not Real", "CA"};
    printf("%s\n", add1.name);


    // type qualifiers - keywords used to modify the properties of a given variable
    // examples include Const and Volatile


    // using date/time
    // <time.h>
    // types : struct tm, time_t, clock_t, timespec
    // functions:
    // time_t time(time_t *destTime );
    // struct tm * localtime( const time_t *sourceTime );


    // localization
    // <locale.h>
    // type: struct lconv


    // multiple declarations
    float f, d, c, g, h;


    // Memory Management
    // stack uses last in first out approach (LIFO). it is memory managed by variable scope.
    // heap memory is not automatically managed. explicitly allocate and deallocate. pointers!
    // static memory is for variables that have the same lifetime as your program. static and global.


    // misc operators
    // sizeof - calculates the size of a given type
    // &variable returns the address of a variable
    // *variable creates a pointer to a variable
    int * pointer1 = &numbers;
    printf("%d \n",*pointer1); 
    // tenrenary catch --> condition ? true : false;
    bool greaterThan2021 = numbers > 2021 ? true : false;

}