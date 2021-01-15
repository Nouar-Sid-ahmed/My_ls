/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/
#include "../../include/my.h"

int isoption(char **l,char opt){
  int k;
  for (k = 0; k < my_strlenT(l) ;k++){
    if (l[k][1] == opt)
      return 1;
  }
  return 0;
}
