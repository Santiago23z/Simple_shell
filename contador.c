#include "shell.h"

int contador(char *str)
{
    int linea = 0;
    unsigned int entero = 0;
    while (*str)
    {
        if(*str == ' ' || *str == '=' || *str == ':' || *str == '\n' || *str == '\t')
        linea = 0;

        else if (linea == 0)
        {
            linea = 1;
            ++entero;
        }
        ++str;
    }
    return (entero);
}