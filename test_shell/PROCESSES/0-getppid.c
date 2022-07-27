#include <stdio.h>
#include <unistd.h>
/**
 * main - get PID
 * Return: 0
 */
int main(void)
{
	int son_pid, father_pid;

	son_pid = getpid();
	father_pid = getppid();

	printf("Process ID: %d\n", son_pid);
	printf("Parent Process ID: %d\n", father_pid);

	return (0);
}
