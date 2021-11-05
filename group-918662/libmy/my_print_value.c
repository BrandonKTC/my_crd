/*
** ETNA PROJECT, 29/10/2021 by kwamou_b
** my_find_lst
** File description:
**      Linked Lists
*/
#include "../my_list.h"
#include <stdio.h>
#include <stdlib.h>


linked_list_t *my_print_value(char **tab, linked_list_t *list)
{
    linked_list_t *lst = list;
    int key = my_getnbr(tab[0]);
    char *value;

    while(lst != NULL)
        {
            if (lst->key == key)
                {
                    value = lst->value;
                    my_putstr(value);
                    return lst;
                }
            lst = lst->next;
        }

        my_putstr("-1");
        my_putchar('\n');
        
    return lst;
}