/*                                                
** ETNA PROJECT, 03/10/2020 by nouar_a & machad_f
** my prototypes                                  
** File description:                              
**      formatage.c to get right in string                                     
*/

#include "../../include/my.h"

int     my_strncmp(const char *s1, const char *s2, int n)
{
    int c;
    if (*s1 != *s2) {
        c = *s1 - *s2;
        return c;
    }
    while (*s1 == *s2 && n > 0) {
        s1++;
        s2++;
        n--;
    }
    c = *s1 - *s2;
    return c;
}
