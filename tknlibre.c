#include "shell.h"

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