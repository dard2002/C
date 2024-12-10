#include <stdio.h>
#include <stdlib.h>

struct my_struct {
    int* data;
    int size;
    int numOfItems;
};

void addToStruct(struct my_struct *s, int item) {
    if(s->numOfItems == s->size) {
        
        s->data = realloc(s->data, s->size * sizeof(int));
    }

    s->data[s->numOfItems] = item;
    s->numOfItems++;
}

int main() {
    struct my_struct s;
    s.numOfItems = 0;
    s.size = 5;
    s.data = malloc(s.size * sizeof(int));

    for(int i = 1; i <= 16; ++i) {
        addToStruct(&s, i);
        printf("%d\n", s.data[i-1]);
    }

    free(s.data);
    s.data = NULL;

    return 0;
}