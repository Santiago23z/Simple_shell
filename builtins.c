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
