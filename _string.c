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

/**
 * _strdup - duplicate
 * @s; string to be duplicated
 * Return: pomiter a string
 */
char *_stdup(char *s)
{
	int i;
	char *dup;
	int len;

	if (s == NULL)
	{
		return (NULL);
	}
	len = strlen_(s);
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		dup[i] = s[i];
	}
	dup[i] = '\0';
	return (dup);	
}

/**
 * _strcat - concatenates 
 * @dest: input
 * @src: input
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int u = 0;
	int j;

	while (dest[i] != '\0')
	i++;
	while (src[u] != '\0')
	u++;
	for (j = 0; j <= u; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
