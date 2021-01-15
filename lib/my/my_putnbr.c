/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** putnbr
** File description:
**      the fonction "putnbr"
*/
#include "../../include/my.h"

void my_putnbr(int n)
{
    long int i;
    i = n;
    if ( i < 0 ) {
        i = - i;
        my_putchar('-');
    }
    if ( i > 9 ) {
        my_putnbr( i / 10 );
        my_putnbr( i % 10 );
    }
    else
        my_putchar( i + 48 );
}
