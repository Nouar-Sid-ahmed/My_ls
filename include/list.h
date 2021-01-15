/*
** ETNA PROJECT, 03/10/2020 by nouar_a & machad_f
** list
** File description:
**      list
*/

#ifndef __LIST_H__
#define __LIST_H__

typedef struct linked_list
{
  char *name;
  char date[50];
  char *right;
  char *name_user;
  char *name_group;
  int size;
  int nlink;
  unsigned char type;
  struct linked_list *next;
} linked_list_info;

#endif
