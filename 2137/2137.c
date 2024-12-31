#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_POSITIONS 11
#define MAX_NAME_LENGTH 100

// Function to compute hash index from name initials
int compute_hash_index(const char *name)
{
    int hash_value = 0;
    for (int i = 0; name[i] != '\0'; ++i)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        { // check for uppercase initials
            hash_value = hash_value * 100 + (name[i] - 'A' + 1);
        }
    }
    return hash_value % NUM_POSITIONS;
}

int main()
{
    char positions[NUM_POSITIONS][MAX_NAME_LENGTH] = {0}; // Initialize all positions to empty strings
    char name[MAX_NAME_LENGTH];

    while (fgets(name, MAX_NAME_LENGTH, stdin) != NULL)
    { // Read a line of input until EOF
        // Remove newline character from fgets input
        name[strcspn(name, "\n")] = '\0';

        int index = compute_hash_index(name);
        // Collision resolution by linear probing
        int original_index = index;
        while (positions[index][0] != '\0')
        {
            index = (index + 1) % NUM_POSITIONS;
            if (index == original_index)
            { // If it loops back to the start
                fprintf(stderr, "No available positions\n");
                return 1; // Exit with error if no positions available
            }
        }
        strcpy(positions[index], name); // Assign name to the position
        printf("%d\n", index);          // Print the position number
    }

    return 0;
}
