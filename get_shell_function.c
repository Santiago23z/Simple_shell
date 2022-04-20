#include "shell.h"

/**
 * get_shell_function - get function
 * @sh: variable
 * Return: Null
 */
int (*get_shell_function(char *s))(void)
{
	int i = 0;

	sbuilt_t bin[] = {
		{"env", shell_enviroment},
		{"exit", shel_exit},
		{NULL, NULL}
	};

	while (bin[i].var != NULL)
	{
		if ((strcmmp_(s, bin[i].var)) == 0)
		{
			return (bin[i].f);
		}
		i++;
	}
	return (NULL);
}
