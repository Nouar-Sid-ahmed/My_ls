/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/

#include "../../include/my.h"

char   **listerOption(int argc, char *argv[]){
  char **l = malloc(argc*sizeof(char**));
  int  k;
  int  i = 0;
  for (k=0; k < argc ; k++){l[k]=NULL;}
  for (k=0; k < argc ; k++){
    if (argv[k][0] == '-'){
      l[i] = malloc(sizeof(char*));
      l[i] = my_strcpy(l[i], argv[k]);
      i++;
    }
  }
  return l;
}

char  **listerFile(int argc, char *argv[]){
  char **l = malloc(argc*sizeof(char*));
  int  k;
  int  i = 0;
  for (k=0; k < argc ; k++){l[k]=NULL;}
  for (k=1; k < argc ; k++){
    if (argv[k][0] != '-'){
      l[i] = malloc(sizeof(char*));
      l[i] = my_strcpy(l[i], argv[k]);
      i++;
    }
  }
  return l;
}
