#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void search(char *s1, char *s2, char *s3);
int split(char string_words[][50], char *string);

int main()
{
    char s1[100];
    char s2[100];
    char longest_word[100];
    while (gets(s1) && gets(s2))
    {
        search(s1, s2, longest_word);
        printf("%s\n", longest_word);
    }
    return 0;
}

void search(char *s1, char *s2, char *s3)
{
    int split(char string_words[][50], char *string);
    char words_of_s1[50][50];
    char words_of_s2[50][50];
    int num_of_the_same_words = 0;
    int num_of_words_s1 = split(words_of_s1, s1);
    int num_of_words_s2 = split(words_of_s2, s2);
    char the_same_words[50][50];

    for (int i = 0, k = 0; i < num_of_words_s1; i++)
    {
        for (int j = 0; j < num_of_words_s2; j++)
        {
            if (strcmp(words_of_s1[i], words_of_s2[j]) == 0)
            {
                strcpy(the_same_words[k++], words_of_s2[j]);
                num_of_the_same_words++;
                break;
            }
        }
    }

    int longest = strlen(the_same_words[0]);
    int longest_word_index = 0;
    for (int i = 1; i < num_of_the_same_words; i++)
    {
        int len_i = strlen(the_same_words[i]);

        if (len_i > longest)
        {
            longest_word_index = i;
        }
    }
    strcpy(s3, the_same_words[longest_word_index]);
}
int split(char string_words[][50], char *string)
{
    int len = strlen(string);
    int k = 0, j = 0;
    for (int i = 0; i < len; i++)
    {
        if (string[i] != ' ')
        {
            if (i > 0 && string[i - 1] == ' ')
            {
                string_words[k][j++] = '\0';
                k++;
                j = 0;
            }
            string_words[k][j++] = string[i];
        }
    }
    string_words[k][j++] = '\0';
    return (k + 1);
}
