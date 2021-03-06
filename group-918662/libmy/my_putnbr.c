/*
** ETNA PROJECT, 19/10/2021 by kwamou_b
** my_putnbr
** File description:
**      print word function
*/
#include <unistd.h>

void my_putchar(char c);

void	my_putnbr(int nb)
{
  int	modulo;

  modulo = 0;
  if (nb <= 9 && nb >= 0)
    my_putchar(nb + '0');
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (- 1);
      if (nb <= 9 && nb >=0)
        my_putnbr(nb);
    }
  if (nb > 9)
    {
      modulo = nb % 10;
      my_putnbr(nb / 10);
      my_putchar(modulo + '0');
    }
}