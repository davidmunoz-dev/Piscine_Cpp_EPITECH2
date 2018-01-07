/*
** drawing.c for  in /home/munoz_d/piscine_cpp/cpp_d01/ex03
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Wed Jan  4 21:58:05 2017 David Munoz
** Last update Wed Jan  4 23:13:54 2017 David Munoz
*/

#include "drawing.h"

void	draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color)
{
  size_t	x;
  size_t	y;

  x = 0;
  y = 0;
  while (x < size)
    {
      y = 0;
      while (y < size)
	{
	  img[orig->x + x][orig->y + y] = color;
	  y++;
	}
      x++;
    }
}
