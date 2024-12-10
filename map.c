#include <stdio.h>
#include <stdlib.h>

// Integer Map in C - Dylan Armstrong

struct map {
    int* key;
    int* value;
    int size;
    int numOfItems;
};

void addToMap(struct map* my_map, int key, int value) {
    if(my_map->numOfItems == my_map->size) {
        my_map->size += 10;
        my_map->key = realloc(my_map->key, my_map->size * sizeof(int));
        my_map->value = realloc(my_map->value, my_map->size * sizeof(int));
    }

    my_map->key[my_map->numOfItems] = key;
    my_map->value[my_map->numOfItems] = value;

    my_map->numOfItems++;
}

// Find value by key in the map
int findValue(struct map* my_map, int key) {
    for(int i = 0; i <= my_map->numOfItems; ++i) {
        return my_map->value[key];
    }
}

int main() {
    struct map my_map;
    my_map.numOfItems = 0;
    my_map.size = 10;
    my_map.key = malloc(my_map.size * sizeof(int));
    my_map.value = malloc(my_map.size * sizeof(int));

    for(int i = 0; i <= 100; ++i) {
        addToMap(&my_map, i, i);
        printf("Key %d, Value %d\n", my_map.key[i], my_map.value[i]);
    }

    printf("FOUND MAP! Key is: %d, Value is: %d\n", 5, findValue(&my_map, 5));

    // Print memory size of key/value - should be the same as eachother as they are both integers
    printf("%lu Bytes\n", my_map.size * sizeof(int));

    addToMap(&my_map, 101, 133);
    printf("FOUND MAP! Key is: %d, Value is: %d\n", 101, findValue(&my_map, 101));
    
    free(my_map.key);
    my_map.key = NULL;

    free(my_map.value);
    my_map.value = NULL;

    return 0;
}