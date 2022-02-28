#include <stdio.h>
#include <stdlib.h>

float CelsiusFromFahrenheit(float tempF) {
    
    /* Convert tempurature input to Celcius. */
    float tempC = (tempF - 32.0) * 5.0 / 9.0;
    
    /* Formatting output text. */
    printf("The corresponding temp in C is %.2f C. \n", tempC);

    /* return value from the function. */
    return tempC;
}

void Swap(float *a, float *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    puts("Temp Conversions");
    puts("===========================");
    for (float tempF = 10.0; tempF < 100.0; tempF += 5.0) {

        float celsius = CelsiusFromFahrenheit(tempF);
        printf("%.1f F          |           %5.1f C \n", tempF, celsius);
        Swap(&tempF, &celsius); // useless code but practicing  
        Swap(&tempF, &celsius); // useless code but practicing
        /* pointers can be used to effeciently manage large data. pass pointer (8 bytes) 
           instead of 100 mb file. */
    }
    puts("---------------------------");

    return EXIT_SUCCESS;
}