/*
** mul_div.c for  in /home/munoz_d/piscine_cpp/cpp_d02m/ex00
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan  5 08:10:34 2017 David Munoz
** Last update Thu Jan  5 08:27:49 2017 David Munoz
*/

void	add_mul_4param(int first, int second, int *add, int *mul)
{
  *add = first + second;
  *mul = first * second;
}

void	add_mul_2param(int *first, int *second)
{
  int tmp;

  tmp = *first;
  *first = *first + *second;
  *second = tmp * *second;
}
