#include "shell.h"

/**
 * shell_enviroment - the environ function
 * Return: 0
 *
 */
int shell_enviroment(void)
{
	int envi = 0;

	while (environ[envi])
	{
		write(STDOUT_FILENO, environ[envi], strlen(environ[envi]));
		write(STDOUT_FILENO, "\n", 1);
		envi++;
	}
	return (0);
}
