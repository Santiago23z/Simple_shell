#include "shell.h"

/**
 * main - this is main function
 * Return: int
 */

int forkt(char *path, char **opcion)
{
	pid_t son;
	int status = 0;

	son = fork();
	if (son < 0)
	{
		perror("Fork error");
		return (-1);
	}
	if (son == 0)
	{
	execve(&path[0], opcion, NULL);
	}
	else
	{
		wait (&status);
		free(opcion);
		free(path);
	}
	return (1);
}
