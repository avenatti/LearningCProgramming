#include <stdio.h>
#include <stdlib.h>

void main() {

    
    // 1. Pointer and pointee are seperate -- don't forget to setup the pointee
    // 2. Pointer dereferencing allows access to its pointee
    // 3. Pointer Assignment (=) between pointers makes the point to the same pointee (sharing)

    // standard pointer
    int n = 10;   
    int *p = &n; // Variable p of type pointer is pointing to the address of the variable n of type integer
    printf("Address of p variable is %x \n",p); // p contains the address of the number therefore printing p gives the address of number.     
    printf("Value of p variable is %d \n",*p); // As we know that * i
    
    int *a; //pointer to int  
    char *c; //pointer to char 

    // pointer to array
    int arr[10];
    int *p[10]=&arr; // variable p of type pointer is pointing to the address of an integer array arr

    // pointer to structure
    struct st {
        int i;
        float f;

    } ref;

    struct st *p = &ref;

}

// pointer to function
void show (int);
void(*p)(int)=&show;

// ! Advantages of pointers
// 1. pointers reduce code and improves performance
// 2. return multiple values from a function
// 3. Access any memory location


// ! Usage of Pointers
// 1. Dynamic memory allocation --> in c language, dynamically allocate memory using malloc() 
//    and calloc() functions where the pointer is used
// 2. Arrays, Functions, Structures --> pointers are widely used in arrays, functions, and structures


// ! Address Of (&) Operator
// '&' returns the address of a variable. use %u to display the address of the variable.
// printf("value of number is %d, address of number is %u",number,&number);


// ! NULL Pointer
// If you have no value for a pointer at declaration initialize it to NULL;
// int *p=NULL;


// ! Reading Complex Pointers
// (): This operator is a bracket operator used to declare and define the function.
// []: This operator is an array subscript operator
// * : This operator is a pointer operator.
// Identifier: It is the name of the pointer.
// Data type: Data type is the type of the variable to which the pointer is intended to point. 

// Operator	    |   Precedence  |   Associativity
// (), []       |	1	        |   Left to right
// *, identifier|	2	        |   Right to left
// Data type	|   3	        |   N/A

// ! Example (Read the pointer): int (*p)[10]
// 
