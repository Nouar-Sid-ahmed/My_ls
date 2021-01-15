/*                                                
** ETNA PROJECT, 03/10/2020 by nouar_a & machad_f
** my prototypes                                  
** File description:                              
**      formatage.c to get right in string                                     
*/

#include "../../include/my.h"

char *formatage(struct stat fileStat){
  char *c = malloc(sizeof(char)*11);
  my_strcpy(c, (S_ISDIR(fileStat.st_mode)) ? "d" : "-");
  my_strcat(c, (fileStat.st_mode & S_IRUSR) ? "r" : "-");
  my_strcat(c, (fileStat.st_mode & S_IWUSR) ? "w" : "-");
  my_strcat(c, (fileStat.st_mode & S_IXUSR) ? "x" : "-");
  my_strcat(c, (fileStat.st_mode & S_IRGRP) ? "r" : "-");
  my_strcat(c, (fileStat.st_mode & S_IWGRP) ? "w" : "-");
  my_strcat(c, (fileStat.st_mode & S_IXGRP) ? "x" : "-");
  my_strcat(c, (fileStat.st_mode & S_IROTH) ? "r" : "-");
  my_strcat(c, (fileStat.st_mode & S_IWOTH) ? "w" : "-");
  my_strcat(c, (fileStat.st_mode & S_IXOTH) ? "x" : "-");
  return c;
}
