#include <stdio.h>
#include <stdlib.h>

int main() {
    int* swinSquadMembers;
    int numSwinSquadMembers = 344;

    swinSquadMembers = malloc(numSwinSquadMembers * sizeof(*swinSquadMembers)); // Allocate memory to pointer variable
    *swinSquadMembers = numSwinSquadMembers; // Set value of dereferenced pointer variable

    printf("%lu Bytes\n", numSwinSquadMembers * sizeof(*swinSquadMembers)); // Print size (in bytes) of memory allocated for swinSquadMembers
    printf("%d\n", *swinSquadMembers); // Print dereferenced value

    free(swinSquadMembers); // Free memory when done
    swinSquadMembers = NULL;

    return 0;
}