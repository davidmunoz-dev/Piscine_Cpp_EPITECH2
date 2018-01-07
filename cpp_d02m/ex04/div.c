/*
** div.c for  in /home/munoz_d/piscine_cpp/cpp_d02m/ex04
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan  5 10:26:25 2017 David Munoz
** Last update Thu Jan  5 11:37:45 2017 David Munoz
*/

#include "castmania.h"

int	integer_div(int a, int b)
{
  if (b == 0)
    return (0);
  return (a % b);
}

float	decimal_div(int a, int b)
{
  if (b == 0)
    return (0);
  return (a / b);
}

int	exec_div(t_div *operation)
{
  if (operation->t_div_type == INTEGER)
    {
    }
  else if (operation->t_div_type == DECIMALE)
    {
    }
}
