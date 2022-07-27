#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - splits a string and returns an array of each word of the string
 * Return: 0
 */
int main(void)
{
	char *buffer = NULL;
	size_t len = 0;
	char *token;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("buffer getline: %s", buffer);

		token = strtok(buffer, " ");
		while (token)
		{
			printf("buffer strtok: %s\n", token);
			token = strtok(NULL, " ");
		}
	}
	return (0);
}
