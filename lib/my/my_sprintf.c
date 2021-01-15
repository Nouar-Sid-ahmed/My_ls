/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** my_ls
** File description:
**      the fonction "my_ls", the main
*/
#include "../../include/my.h"


char *my_sprintf(int i, char *b){
    char const d[] = "0123456789";
    char* p = b;
    int s;
    if(i<0){
        *p++ = '-';
        i *= -1;
    }
    s = i;
    do{	
        ++p;
        s = s/10;
    }while(s);
    *p = '\0';
    do{	
        *--p = d[i%10];
        i = i/10;
    }while(i);
    return b;
 }
