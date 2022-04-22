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


extern char **environ;

/**
 * struct shell_built - the structure
 * @var: variable
 * @f: function associate
 */
typedef struct shell_built
{
	char *var;
	int (*f)();
} sbuilt_t;

int strlen_(char *str);
int strcmmp_(char *str1, char *str2);
char *_stdup(char *s);
char *_strcat(char *dest, char *src);
/*char *strncmp(char *s1, char *s2, size_t n);*/
/*char *strcpy(char *destino, char *source);*/
int shel_exit(void);
int builtins(char **listbuiltin);
int shell_enviroment(void);
char *prompt(void);
char **tkn(char *str, char *lim);
int contador(char *str);
void libres_tkn(char **tkn);
int (*get_shell_function(char *sh))(void);
char *path_ruta(char **pth);
int forkt(char *path, char **opcion);

#endif
