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

int strlen_(char *str);
int strcmmp_(char *str1, char *str2);
int exit(void);
int builtins(char **listbuiltin);

#endif
