/*
** menger.c for  in /home/munoz_d/piscine_cpp/cpp_d01/ex01
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Wed Jan  4 15:58:22 2017 David Munoz
** Last update Wed Jan  4 19:04:46 2017 David Munoz
*/

#include <stdio.h>

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  int	neg;

  i = 0;
  nbr = 0;
  neg = 1;
  if (str == NULL)
    return (0);
  while (str[i] == '-')
    {
      neg = neg * -1;
      i++;
    }
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (nbr * neg);
      nbr = nbr * 10 + (str[i] - '0');
      i++;
    }
  return (nbr * neg);
}
