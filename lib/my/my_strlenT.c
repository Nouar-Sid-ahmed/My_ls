/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/


#include "../../include/my.h"

int     my_strlenT(char *str[])
{
  int c = 0;
  for (c = 0; str[c]; c++);
  return c;
}
