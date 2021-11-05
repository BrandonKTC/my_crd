#include <stdio.h>
#include <stdlib.h>
#include "../my_list.h"

int main() {
	linked_list_t *list = NULL;
	char *line = NULL;
	size_t n = 0;
	char **tab;


	while(getline(&line,&n,stdin) != -1) 
		{
			tab = my_str_to_word_array(line);

			if (tab[1] != NULL)
				{
					if (is_num(tab[1]))
						{
							list = my_push_front_to_list(tab,list);
						}
					else
						{
							list = my_delete_node(tab,list);
						}
				}
			else
				{
					my_print_value(tab,list);
				}
		}
		free(line);
	}