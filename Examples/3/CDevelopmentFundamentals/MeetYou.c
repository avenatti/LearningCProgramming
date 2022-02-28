#include <stdio.h>

int main(void) {

    printf("What's your name? ");
    
    char name[40]; // array of 39 chracters + \0 terminate character.
    scanf("%39s", name);

    printf("\n Nice to meet you, %s!\n", name);

    return 0;
}

