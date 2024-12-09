#include <stdio.h>

/*
    Temperature convertor - Farenheit to Celcius
    In C, you can declare multiple variables of the same type on the same line in one expression.
    Also, variables MUST be initialized before they can be used.
    %d means a number
    \t means tab
    \n means a new line
*/
int main() {
    int fahr, celcius, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;
}