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


	if (isatty(STDIN_FILENO) == 0)
		return (NULL);
	write(1, "My_prompt$ ", 11);
	l = malloc(sizeof(char) * BUFF_sz);
	index = getline(&l, &size, stdin);

	if (l == NULL)
	{
		perror("malloc");
		free(l);
		exit(EXIT_FAILURE);
	}
	if (index == -1)
	{
		free(l);
		return (NULL);
	}
	return (l);
}
