#include "shell.h"

/**
 * forkt - function that creates a son
 * @path: rut
 * @opcion: pointer to a variable
 * Return: int
 */

int forkt(char *path, char **opcion)
{
	pid_t son;
	int status = 0;

	son = fork();
	if (son < 0)
	{
		free(path);
		return (-1);
	}
	if (son == 0)
	{
	execve(path, opcion, environ);
	}
	else
	{
		wait(&status);
		free(opcion);
	}
	return (1);
}
