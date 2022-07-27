#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints "$ "
 * Return: 0
 *
 */
int main(void)
{
	char *str = NULL;
	size_t len = 0;

	printf("$ ");
	getline(&str, &len, stdin);
	printf("\n %s \n", str);
	free (str);

	return(0);
}
