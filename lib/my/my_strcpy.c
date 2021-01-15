/*                                                
** ETNA PROJECT, 03/10/2020 by nouar_a & machad_f
** my strcpy                                 
** File description:                              
**      my_strcpy                                     
*/

char *my_strcpy(char *dest, const char *src)
{
    int n = 0;

    while (*src != '\0') {
        *dest= *src;
        dest++;
        src++;
        n++;
    }
    *dest = '\0';
    while (n != 0) {
        dest--;
        n--;
    }
    return (dest);
}
