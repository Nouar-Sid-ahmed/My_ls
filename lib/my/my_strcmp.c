/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_strncmp
** File description:
**      the fonction strncmp
*/
#include "../../include/my.h"

int     my_strcmp(const char *s1, const char *s2) {
  int c;
  
  if (*s1 != *s2) {
    c = *s1 - *s2;
    return c;
  }
  while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
    s1++;
    s2++;
  }
  c = *s1 - *s2;
  return c;
  
}