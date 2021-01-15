/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/
#include "../../include/my.h"

void search_dir(const char *arg, char **loption)
{
  DIR *rep;
  struct dirent *dp;
  char *space;
  char fileName[4000];
  space = "  ";
  if( NULL == (rep=opendir(arg)) )
    return;
  while( NULL != (dp=readdir(rep)) )
  {
    if ( ((isoption(loption,'a')) ? 1: (dp->d_name[0] != '.')) ){
      my_strcat(my_strcpy(fileName, dp->d_name),((isoption(loption,'1'))? "\n": space));
      my_putstr(fileName);
    }
  }
  my_strcpy(fileName, "\n");
  my_putstr(fileName);
  closedir( rep );
}
