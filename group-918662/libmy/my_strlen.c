/*
** ETNA PROJECT, 20/10/2021 by kwamou_b
** my_strlen
** File description:
**      count length of string
*/
#include <unistd.h>

int my_strlen(const char *str) {
 int	i;
	i = 0;
	while (str[i]) {
   i++;
		}
  return i;
}
