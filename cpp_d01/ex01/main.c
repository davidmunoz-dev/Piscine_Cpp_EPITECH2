/*
** main.c for  in /home/munoz_d/piscine_cpp/cpp_d01/ex01
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Wed Jan  4 12:15:46 2017 David Munoz
** Last update Wed Jan  4 19:06:17 2017 David Munoz
*/

#include <stdio.h>

int	my_getnbr(char *str);

void	func(int size, int depth, int x, int y)
{
  int	new_size;

  new_size = 0;
  if (depth > 0)
    {
      new_size = size / 3;
      depth--;
      printf("%03d %03d %03d\n", new_size, new_size+x, new_size+y);
      func(new_size, depth, x, y);
      func(new_size, depth, x, y + new_size);
      func(new_size, depth, x, y + 2 * new_size);
      func(new_size, depth, x + new_size, y);
      func(new_size, depth, x + new_size, y + 2 * new_size);
      func(new_size, depth, x + 2 * new_size, y);
      func(new_size, depth, x + 2 * new_size, y + new_size);
      func(new_size, depth, x + new_size * 2, y + new_size * 2);
    }
}


int	main(int ac, char **av)
{
  if (ac != 3)
    return (84);
  func(my_getnbr(av[1]), my_getnbr(av[2]), 0, 0);
  return (0);
}
