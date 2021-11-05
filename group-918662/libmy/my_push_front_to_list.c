#include "../my_list.h"
#include <stdlib.h>
#include <stdio.h>


linked_list_t *my_push_front_to_list(char **tab, linked_list_t *list)
{
    int p = -1;
    linked_list_t *lst = list;
    int key = my_getnbr(tab[0]);
    char *valeur = tab[1];

    while (lst != NULL)
        {
            if (lst->key == key)
                {
                    lst->value = valeur;
                    my_putnbr(key);
                    my_putchar('\n');
                    p = 1;
                    return (list);
                }
            lst = lst->next;
        }

    if (p == -1)
    {
        linked_list_t *node;

        node = malloc(sizeof(linked_list_t));
        node->next = list;
        node->value = valeur;
        node->key = key;
        lst = node;
    }
    my_putnbr(key);
    my_putchar('\n');
    return (lst);
}
