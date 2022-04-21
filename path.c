#include "shell.h"

/**
 * path_ruta - path
 * @pth: arguments
 * Return: *
 */
char *path_ruta(char **pth)
{
	char *rut = NULL, **path_tkn = NULL, *rutnew = NULL;
	int i = 0, x = 1, l1 = 0;
	struct stat bm;

	while (environ[i])
	{
		if (strncmp(environ[i], "PATH", 4) == 0)
		{
			rut = _stdup(environ[i]);
			break;
		}
		i++;
	}
	if (!rut)
		return (NULL);
	path_tkn = tkn(rut, "=:");
	l1 = strlen_(pth[0]);
	while (path_tkn[x])
	{
		rutnew = malloc(sizeof(char) * (strlen_(path_tkn[x]) + l1 + 2));
		strcpy(rutnew, path_tkn[x]);
		if (!rutnew)
		{
			printf("Error in the path\n");
			return (NULL);
		}
		_strcat(rutnew, "/");
		_strcat(rutnew, pth[0]);
		if (stat(rutnew, &bm) == 0)
		{
            free(path_tkn);
			free(rut);
			return (rutnew);
		}
		free(rutnew);
		x++;
	}
	free(path_tkn);
	free(rut);
	return (NULL);
}
