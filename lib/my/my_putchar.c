/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** putchar
** File description:
**      the fonction "putchar"
*/
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
