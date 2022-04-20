#include "shell.h"

/**
 * builtins - List of bultins
 * @listbuiltin: double pointer
 * Return: result
 */
int builtins(char **listbuiltin)
{
	int list;
	int character;

	list = sizeof(listbuiltin);
	character = sizeof(char *);

	return (list / character);
}

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
