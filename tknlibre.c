#include "shell.h"

/**
 * libres_tkn - function that frees the tokens
 * @tkn: token to be free
 */
void libres_tkn(char **tkn)
{
	int idx = 0;

	while (tkn[idx] != NULL)
	{
		free(tkn[idx]);
		idx++;
	}
	free(tkn);
}
