#include <stdio.h>

// Exercise 1.4 from the book

int main() {
    float fahr, celcius, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("~ Temperature Table ~\n");
    while (celcius <= upper) {
        fahr = (celcius * 9 / 5) + 32;
        printf("%3.0f %6.0f\n", celcius, fahr);
        celcius = celcius + step;
    }

    return 0;
}