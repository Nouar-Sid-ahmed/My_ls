/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/
#include "../../include/my.h"

int     my_strlen(const char *str)
{
  int c = 0;
  while (*str != '\0') {
    c++;
    str++;
  }
  return c;
}
