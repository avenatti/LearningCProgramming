#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_SIZE 1000;

// array is a container that houses elements of a single type within a contigous block of memory

// arrays are essential for operating on sequential elements of the same type
// fast access - quick read and writes
// memory effecientcy - elements are contiguous
// multidimensional - model martix-record operations

// int arr[] = {1, 2, 3, 4}; // declaration and assignment

// array are not pointers themselves but arrays decay to pointers ---> arr == &arr[0]
// void iterateThroughArray(int *arr, size_t size);
// iterateThroughArray(arr, 4);

// a 2d array can be thought of like a table...

// int arr2[][2] = {{245,38},{78,27},{89,26}};
// arr2[0][0] == 245

// c99 variable length arrays are supported 

int array_size = DEFAULT_SIZE;

