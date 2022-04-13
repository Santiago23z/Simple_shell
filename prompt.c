#include "shell.h"

/**
 * main - prompt function
 * Return: 0 if is succesfull, -1 if is failure
 *
 */
int main(char *in)
{
	char *bf, *tkn;
	size_t bfsize;
	size_t letters; 
	int count = 0;
	char delim[2] = " ";

	bf = malloc(sizeof(char) *bfsize);
	if (bf == NULL)
	{
		return (-1);
	}

	while (count == 0)
	{
		printf("$ ");
		letters = getline(&bf, &bfsize, stdin);
		if (letters != -1)
		{
			printf("%s\n", bf);
			break;
		}
	}
	tkn = strtok(bf, delim);

	while (tkn != NULL)
	{
		printf("The tkn %i is %s\n", count, tkn);
		tkn = strtok(0, delim);
		count++;
	}
	free(bf);
	return (0);
}
