#include <stdio.h>

int main() {
    int nc; // Dosen't need to be a long, can be an integer

    for(nc = 0; nc <= 40000; ++nc) {
        printf("%d\n", nc);
    }

    return 0;
}