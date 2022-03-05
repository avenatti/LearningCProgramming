#include <stdio.h>
#include <stdlib.h>

int main() {

    int a=10, b=20, *p1=&a,*p2=&b;

    printf("Before swapping: A=%d | B=%d", *p1, *p2);
    
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("\nAfter swap: A=%d | B=%d", *p1, *p2);

    return EXIT_SUCCESS
}