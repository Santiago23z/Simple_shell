#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>

#define BUFF_sz 1024
#define delim " \t\n"

extern char **environ;

typedef struct shell_built
{
	char *var;
	int (*f)();
} sbuilt_t;

int strlen_(char *str);
int strcmmp_(char *str1, char *str2);
int sh_exit(void);
int builtins(char **listbuiltin);
int sh_enviroment(void);
char *prompt(void);
char **tkn(char *str, char *lim);
int contador(char *str);
void libres_tkn(char **tkn);
int (*get_shell_function(char *sh))(void);


#endif
