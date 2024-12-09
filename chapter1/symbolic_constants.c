#include <stdio.h>

// Defining symbolic constants for LOWER, UPPER and STEP these cannot be modified.
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    float fahr, celcius;

    fahr = LOWER;

    printf("~ Temperature Table ~\n");
    while (celcius <= UPPER) {
        fahr = (celcius * 9 / 5) + 32;
        printf("%3.0f %6.0f\n", celcius, fahr);
        celcius = celcius + STEP;
    }

    return 0;
}