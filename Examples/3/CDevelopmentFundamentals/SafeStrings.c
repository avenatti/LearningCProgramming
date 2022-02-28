#include <stdio.h>
#include <string.h>

int main(void) {

    printf("What's your name? ");

    char name[40];
    char msg[100];

    scanf("%39s", name);
    
    int len = strlen(str);
    int size = sizeof(str);

    printf("\nLength = %d; Size = %d.\n", len, size);

    /* UTF-8 international coding can require up to 4 characters of memory 
       space to represent a single character like beer mug icon. */

    strcpy_s(msg, sizeof(msg), name);
    strcat_s(msg, sizeof(msg), " is ");
    strcat_s(msg, sizeof(msg), " learning C.");

    /* print the total msg */
    puts(msg);

    return 0;
}