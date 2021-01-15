/*                                                
** ETNA PROJECT, 03/10/2020 by nouar_a & machad_f
** my prototypes                                  
** File description:                              
**      formatage.c to get right in string                                     
*/

#include "../../include/my.h"

char    *my_strstr(char *str, const char *to_find)
{
    int l = my_strlen(to_find);
    while ( my_strncmp(str , to_find , l-1) != 0 && *str != '\0') {
        str++;
    }
    if (*str == '\0')
        return 0;
    return str;
}
