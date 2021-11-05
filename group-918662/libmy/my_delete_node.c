/*
** ETNA PROJECT, 27/10/2021 by kwamou_b
** my_list_size
** File description:
**      linked lists
*/

#include "../my_list.h"
#include <stdlib.h>
#include <stdio.h>

linked_list_t *my_delete_node(char **tab, linked_list_t *list)
	{
		linked_list_t *node = list;
		int key = my_getnbr(tab[0]);
		char *value;

		if (node != NULL)
			{
				if (node->key == key)
					{
						value = node->value;
						my_putstr(value);
						node = node->next;
						return (node);
					}
				else
					{
						while (node != NULL)
							{
								if (node->next->key == key)
									{
										value = node->value;
										my_putstr(value);
										node->next = node->next->next;
										return (list);
									}
								node = node->next;
							}
						my_putstr("-1");
						my_putchar('\n');
						return (list);
					}
			}
		my_putstr("-1");
		my_putchar('\n');
		return list;
	}
