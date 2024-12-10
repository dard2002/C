#include <stdio.h>

// Exercise 1.9 from the book
// Replace each character with one or more blanks with a single blank

int main() {
    int c, nb;

    c = getchar();
    nb = 0;

    while(c != EOF) {
        if(c == ' ') {
            ++nb;
        }

        if(nb >= 1) {
            for(int i = 0; i <= nb; i++) {
                putchar(' ');
            }
        }
        putchar(c);
        c = getchar();
    }

    return 0;
}