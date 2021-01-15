/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/
#include "../../include/my.h"

void search_dir_l(const char *arg, char **option)
{
    DIR *rep;
    struct dirent *dp;
    char fileName[256];
    char fileTime[50]={"\0"};
    char *tmp = malloc(sizeof(int));
    struct stat prop_file;
    if( NULL == (rep=opendir(arg)) )
      return;
    while( NULL != (dp=readdir(rep)) )
    {
      if ((isoption(option,'a')? 1: (dp->d_name[0] != '.')) ){
	my_strcpy(fileName, arg);
	my_strcat(fileName, "/");
	my_strcat(fileName, dp->d_name);
	if ( stat(fileName,&prop_file) )
	  continue;
	my_strcat(fileName,"\n");
	strftime(fileTime, 49, "%b %d %H:%M", localtime(&(prop_file.st_mtime)));
	my_strcat(my_strcpy(fileName, formatage(prop_file)), "\t");
	my_strcat(my_strcat(fileName, my_sprintf((int)prop_file.st_nlink,tmp)), "\t");
	my_strcat(my_strcat(fileName, getpwuid((int)prop_file.st_uid)->pw_name), "\t");
	my_strcat(my_strcat(fileName, getgrgid((int)prop_file.st_gid)->gr_name), "\t");
	my_strcat(my_strcat(fileName, my_sprintf((int)prop_file.st_size,tmp)), "\t");
	my_strcat(my_strcat(fileName, fileTime), "\t");
	my_strcat(my_strcat(fileName, dp->d_name), "\t");
	my_strcat(fileName, "\n");
	my_putstr(fileName);
      }
    }
    closedir( rep );
}
