#include <stdio.h>

// Exercise 1.3 from the book

int main() {
    float fahr, celcius, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("~ Temperature Table ~\n"); // Added this line
    while (fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;
}