#include <stdio.h>

// Exercise 1.8 from the book

int main() {
    int c, nb, nt, nnl;
    
    nb = nt = nnl = 0;
    c = getchar();
    while(c != EOF) {
        if(c == ' ') {
            ++nb;
        }

        if(c == '\t') {
            ++nt;
        }

        if(c == '\n') {
            ++nnl; 
        }

        printf("Blanks %d Tabs %d New Lines %d\n", nb, nt, nnl);
        c = getchar();
    }

    return 0;
}