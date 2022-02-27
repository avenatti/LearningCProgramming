#include <stdio.h>

int main(void) {
    
    /* prompt the user to enter a temp value in fahrenheit */
    printf("Enter a temperature value in fahrenheit: ");

    /* Use snake  or camel case. */
    float tempF = 50.0;

    /* Read user input with scanf. The & == address of variable (pointer/memory address) */
    scanf("%f", &tempF);

    /* Convert tempurature input to Celcius. */
    float tempC = (tempF - 32.0) * 5.0 / 9.0;
    
    /* Formatting output text. */
    printf("The corresponding temp in C is %.2f C. \n", tempC);

    /* return value from the function. */
    return tempC;
}