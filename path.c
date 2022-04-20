#include "shell.h"

/**
 * path_ruta - path
 * @pth: arguments
 * Return: *
 */
char *path_ruta(char *pth)
{
char *rut = NULL;
int x = 0;

rut = malloc(sizeof(char) * BUFF_sz);
if (rut == NULL)
{
perror("failing malloc");
exit(EXIT_FAILURE);
}
while (pth[x] != '\0')
{
if (pth[x] == '/')
{
rut = pth;
break;
}
x++;
}
free(rut);
return (rut);
}
