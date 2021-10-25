/*
** EPITECH PROJECT, 2021
** Infinity add
** File description:
** nombre infini
*/

void	my_put_nbr(int nb)
{
  int	debut;
  int	fin;

  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr(-nb);
    }
  else
    {
      fin = nb % 10;
      debut = nb / 10;
      if (debut != 0)
	my_put_nbr(debut);
      my_putchar(fin + '0');
    }
  return ;
}

// ---------------------------

int	my_getnbr(char *str)
{
  int	nb;
  int	isneg;
  int	i;

  isneg = 1;
  nb = 0;
  i = 0;
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	isneg = isneg * -1;
      i = i + 1;
    }
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  nb = nb * 10;
	  nb = nb + str[i] - '0';
	  i = i + 1;
	}
      else
	return (nb * isneg);
    }
  return (nb * isneg);
}

// ----------------------------------------

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

// ---------------------------------------

int main (int ac, char av)
{

    return 0;
}
