#ifndef SHELL_V2_H
#define SHELL_V2_H

#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <limits.h>
#include <errno.h>
#include <signal.h>
#include <dirent.h>


char **buf_splitter(char *str);
char *env_path(char *cmd);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *str);
int _strlen(char *str);
char *_strcat(char *dest, char *src);
int free_grid(char ***grid);


extern char **environ;
#define ARG_MAX 100

#endif /* SHELL_V2_H */
