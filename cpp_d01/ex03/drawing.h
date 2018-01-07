/*
** drawing.h for  in /home/munoz_d/piscine_cpp/cpp_d01/ex03
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Wed Jan  4 21:36:12 2017 David Munoz
** Last update Wed Jan  4 23:13:45 2017 David Munoz
*/

#ifndef DRAWING_H_
#define DRAWING_H_

#include <stdlib.h>
#include <stdint.h>

typedef struct	s_point
{
  unsigned int	x;
  unsigned int	y;
}		t_point;

void	draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color);

#endif /* DRAWING_H_ */
