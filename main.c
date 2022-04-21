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
    if (function() == 0)
    {
    continue;
    }
    if (function() == 1)
    {
    exit(EXIT_SUCCESS);
    }
    if (stat(save[0], &bm) == 0)
    {
    forkt(save[0], save);
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

