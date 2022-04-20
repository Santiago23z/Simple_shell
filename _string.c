#include "shell.h"

/**
* strcmmp_ - Strings compare
* @str1: string 1
* @str2: string2
* Return: both strings concat
*/
int strcmmp_(char *str1, char *str2)
{
	while ((*str1 != '\0' && *str2 != '\0') && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
	{
		return (0);
	}
	else
	{
		return (*str1 - *str2);
	}
}

/**
 * strlen_ - count chars of strings
 * @str: pointer
 * Return: count chars
 */
int strlen_(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	return (x);
}
