#include "shell.h"
/**
 * main - this is the main function
 * Return: 0
 */
 int main()
{
    char *line;
    char **save;
    char *new_path;
    int (*function)();
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
	    continue;
    }
    function = get_shell_function(save[0]);
    if (function != NULL)
    {
    free(save);
    if (function() == 1)
    {
    free(line);
    exit(EXIT_SUCCESS);
    }
    continue;
    }
    if (stat(save[0], &bm) == 0)
    {
    new_path = strdup(save[0]);
    forkt(new_path, save);
    }
    else
    {
    new_path = path_ruta(save);
    if (new_path != NULL)
    forkt(new_path, save);
    }
    }
    return (0);  
}

