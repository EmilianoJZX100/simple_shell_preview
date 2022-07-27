#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arguments of av[i]
 * Return: 0
 */
int main(int ac, char **av, char **env)
{
	int i = 1;
	(void)ac;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
	printf("\n");
}
