/*
** ETNA PROJECT, 03/10/2020 by nouar_a & machad_f
** my prototypes
** File description:
**      proto
*/

#ifndef __MY_H__
#define __MY_H__

#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <string.h>
#include <time.h>

int     isoption_A(char **loption, char *name);
int     my_strlenT(char **str);
char   *my_sprintf(int i, char *b);
void    search_dir_l(const char *arg, char **option);
void    search_dir(const char *arg, char **loption);
char  **listerFile(int argc, char **argv);
char  **listerOption(int argc, char **argv);
int     isoption(char **l,char opt);
char   *my_strstr(char *str, const char *to_find);
int     my_strncmp(const char *s1, const char *s2, int n);
int     my_strlen(const char *str);
int     my_strcmp(const char *s1, const char *s2);
void    my_putnbr(int n);
char   *my_strcpy(char *dest, const char *src);
char   *formatage(struct stat fileStat);
char   *my_strcat(char *dest, const char *src);
int     my_strcmp(const char *s1, const char *s2);
void    my_putstr(const char *str);
void    my_putchar(char c);
int     main(int argc, char **argv);
void my_sort(linked_list_info **head);
void my_sort(linked_list_info **head);
void my_sort_date(linked_list_info **head);


#endif
