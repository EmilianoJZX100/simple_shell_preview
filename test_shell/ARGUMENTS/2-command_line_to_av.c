#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - splits a string and returns an array of each word of the string
 * Return: 0
 */
int main(int argc, char *argv[])
{
    char *str1, *token;
    int j;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s string delim\n",
                argv[0]);
        exit(EXIT_FAILURE);
    }

    for (j = 1, str1 = argv[1]; ; j++, str1 = NULL) {
        token = strtok(str1, argv[2]);
        if (token == NULL)
            break;
        printf("%d: %s\n", j, token);
    }

    exit(EXIT_SUCCESS);
}

