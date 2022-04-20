#include "shell.h"

/**
 * contador - function that counts
 * @st: string to be analize
 * Return: integer
 */
int contador(char *st)
{
	int linea = 0;
	unsigned int entero = 0;

	while (*st)
	{
		if (*st == ' ' || *st == '=' || *st == ':' || *st == '\n' || *st == '\t')
			linea = 0;
		else if (linea == 0)
		{
			linea = 1;
			++entero;
		}
		++st;
	}
	return (entero);
}
