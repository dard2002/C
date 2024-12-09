#include <stdio.h>

/*
    Me practing printing floats with appropiate number of digits displayed (before and after the decimal point) using printf in C
*/

int main() {
    float x, y, z;
    x = 3.28;
    y = 8.115;
    z = 13.63;

    printf("%1.2f %1.3f %2.2f\n", x, y, z);

    return 0;
}