#include "shell.h"

/**
 * prompt - prompt function
 * Return: 0 if is succesfull, -1 if is failure
 *
 */
char *prompt(void)
{
	char *l = NULL;
	size_t size = 0;
	int index = 0;

	if (isatty(STDIN_FILENO) == 1)
	{
		write(1, "My_prompt$ ", 11);
	}
	index = getline(&l, &size, stdin);

	if (index == -1)
	{
		free(l);
		return (NULL);
	}
	return (l);
}
