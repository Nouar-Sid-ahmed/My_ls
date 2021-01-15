/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** sort
** File description:
**      the fonction "sort"
*/
#include "../../include/my.h"

void my_sort(linked_list_info **head)
{
    linked_list_info    *current;
    char  *tmp;
    int counter = 0;
    current = *head;
    if (current)
    {
        while (current && current->next)
        {
            if (strcmp(current->name, current->next->name) > 0)
            {
                tmp = current->name;
                current->name = current->next->name;
                current->next->name = tmp;
                counter++;
            }
        current = current->next;
        }
    }
}