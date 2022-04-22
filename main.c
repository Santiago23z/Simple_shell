#include "shell.h"
/**
 * main - this is the main function
 * Return: 0
 */
int main(void)
{
	char *line = NULL, *new_path = NULL, **save = NULL;
	int (*function)() = 0;
	struct stat bm;

	while (1)
	{
		line = prompt();
		if (line == NULL)
		{
			exit(EXIT_SUCCESS);
		}
		save = tkn(line, " \n\t");
		if (save == NULL)
		{
            /*free(line);*/
			continue;
		}
		function = get_shell_function(save[0]);
		if (function != NULL)
		{
			free(save);
            free(line);
			if (function() == 1)
			{
				exit(EXIT_SUCCESS);
			}
			continue;
		}
		if (stat(save[0], &bm) == 0)
		{
			new_path = strdup(save[0]);
		}
		else
		{
			new_path = path_ruta(save);
			if (new_path == NULL)
            {
            perror("Error path");
            free(new_path);
            free(save);
            continue;
            }
		}
        if (new_path != NULL)
        {
        forkt(new_path, save);
        }
        free(line);
        free(save);
	}
	return (0);
}

