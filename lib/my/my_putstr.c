/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** putstr
** File description:
**      the fonction "putstr"
*/
#include "../../include/my.h"

void my_putstr(const char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
