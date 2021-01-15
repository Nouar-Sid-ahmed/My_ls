/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/


#include "../../include/my.h"

int        main(int argc, char **argv)
{
    int    i;
    char   dirBuf[128] = {'\0'};
    char * newline = NULL;
    char **loption;
    char **lfile;
    if (argc==1){
      search_dir(".",argv);
    }else{
      loption = listerOption(argc, argv);
      lfile = listerFile(argc, argv);
      if (my_strlenT(lfile) > 0){
	  for(i=0; i < my_strlenT(lfile) ;i++){
	    newline = my_strcpy( dirBuf, lfile[i] );
	    my_putstr(lfile[i]);
	    my_putstr(":\n");
	    if( my_strstr( dirBuf, "\n") )
	      {
		*newline = '\0';
	      }
	    (isoption(loption,'l') ? search_dir_l(dirBuf,loption) : search_dir(dirBuf,loption));
	  }
      }
      else {
	  newline = my_strcpy(dirBuf ,".");
            if( my_strstr( dirBuf, "\n") )
              {
                *newline = '\0';
              }
            (isoption(loption,'l') ? search_dir_l(dirBuf,loption) : search_dir(dirBuf,loption));
          }
      return 0;
    }
}
