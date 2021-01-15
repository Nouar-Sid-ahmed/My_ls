/*
** ETNA PROJECT, 09/10/2020 by nouar_a & machad_f
** sort inverse
** File description:
**      the fonction "sort inverse"
*/
#include "../../include/my.h"

void my_sort_inv(linked_list_info **head)
{
    linked_list_info *current;
    char  *tmp;
    int counter = 0;
    current = *head;
    if (current)
    {
        while (current && current->next)
        {
            if (my_strcmp(current->name, current->next->name) < 0)
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