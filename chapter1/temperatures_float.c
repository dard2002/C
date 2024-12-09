#include <stdio.h>

/*
    Temperature convertor - Farenheit to Celcius
    In C, you can declare multiple variables of the same type on the same line in one expression.
    Also, variables MUST be initialized before they can be used.
    When printing a FLOAT variable, the number on the LEFT hand side of the percentage is how many characters wide it will be, whereas the number on the RIGHT hand side
    is the number of digits after the decimal point.
    \t means tab
    \n means a new line
*/
int main() {
    float fahr, celcius, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;
}