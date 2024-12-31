#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Comparison function for qsort
int cmpfunc(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

// Function to perform counting sort based on ASCII value
void counting_sort(char *str, int len)
{
    // Arrays to store sorted characters
    char digits[len];
    char lowers[len];
    char uppers[len];
    int dlen = 0, llen = 0, ulen = 0; // lengths of each sorted category

    // Traverse the input string and categorize characters
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (isdigit(ch))
        {
            digits[dlen++] = ch;
        }
        else if (islower(ch))
        {
            lowers[llen++] = ch;
        }
        else if (isupper(ch))
        {
            uppers[ulen++] = ch;
        }
    }

    // Sort each category separately
    qsort(digits, dlen, sizeof(char), cmpfunc);
    qsort(lowers, llen, sizeof(char), cmpfunc);
    qsort(uppers, ulen, sizeof(char), cmpfunc);

    // Reconstruct the sorted string
    int di = 0, li = 0, ui = 0; // indices for each sorted category
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (isdigit(ch))
        {
            printf("%c", digits[di++]);
        }
        else if (islower(ch))
        {
            printf("%c", lowers[li++]);
        }
        else if (isupper(ch))
        {
            printf("%c", uppers[ui++]);
        }
        else
        {
            printf("%c", ch); // print unchanged for other characters
        }
    }
    printf("\n");
}

// Main function to read input and call sorting function
int main()
{
    char input[1000001];
    while (scanf("%s",input) != EOF)
    { 
        // Remove the newline character if present
        input[strcspn(input, "\n")] = '\0';

        // Call the sorting function
        counting_sort(input, strlen(input));
    }
}
