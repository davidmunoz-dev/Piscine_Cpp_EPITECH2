/*
** tab_to_2dtab.c for  in /home/munoz_d/piscine_cpp/cpp_d02m/ex02
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan  5 08:56:07 2017 David Munoz
** Last update Thu Jan  5 09:32:00 2017 David Munoz
*/

#include <stdlib.h>
#include <stdio.h>

void	tab_to_2dtab (int *tab, int lenght, int width , int ***res)
{
  int	**tmp;
  int	x;
  int	y;
  int	i;

  x = y = i = 0;
  tmp = malloc((lenght) * sizeof(int *));
  while (y < lenght)
    {
      tmp[y] = malloc((width) * sizeof(int));
      x = 0;
      while (x < width)
	{
	  tmp[y][x] = tab[i];
	  x++;
	  i++;
	}
      y++;
    }
  *res = tmp;
}
