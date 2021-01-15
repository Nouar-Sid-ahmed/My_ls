/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_strcat.c
** File description:
**      the fonction strcat
*/
#include "../../include/my.h"

char *my_strcat(char *dest, const char *src)
{
    int c = 0;
    int j = 0;
    while ( dest[c] != 0 ) {
        c++;
    }
    while ( src[j] != 0 ) {
        dest[c] = src[j];
        j++;
        c++;
        }
    dest[c] = src[j];
    return (dest);
}