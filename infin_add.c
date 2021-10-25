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

void my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
// ---------------------------------------

int my_strlen(char* str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}

// ---------------------------------------

int infinity(char *ar01, char *ar02)
{
    int i = my_strlen(&ar01);
    int j = my_strlen(&ar02);
    int k = 0;
    int o = 0;
    
    if (i < j)
        k = j;
    else
        k = i;

    while (k != '\0') {
        int res = ((int)&ar01[(i-1)-o]) + ((int)&ar02[(j-1)-o]);
        o++;
        k--;
        my_put_nbr(res);
    }
    return 0;
}

// ---------------------------------------


int main (int ac, char *av)
{
    if(ac <= 2){
        write(1,"erreur : ./infin_add '123' '123' ", 32);
        my_putchar('\n');
        return 0;
    }
    else
    {
        write(1, "=> ", 2);
        infinity(av[2], av[3]);
        my_putchar('\n');
    }
    
    return 0;
}
