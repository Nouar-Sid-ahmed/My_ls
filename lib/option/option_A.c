/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/


#include "../../include/my.h"

int isoption_A(char **loption, char *name){
  char indes[4] = ".";
  char indes2[4] = "..";
  if (isoption(loption,'A')){
      if (my_strncmp(name,indes,3) != -1 && my_strncmp(name,indes2,3) != -1){
	return 1;
      }
  }
  return 0;
}
