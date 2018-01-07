/*
** func_ptr.c for  in /home/munoz_d/piscine_cpp/cpp_d02m/ex03
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan  5 09:29:11 2017 David Munoz
** Last update Thu Jan  5 11:35:53 2017 David Munoz
*/

#include <string.h>
#include <stdio.h>
#include "func_ptr.h"

typedef	void	(*t_ptr_print)(char *str);

void	print_normal(char *str)
{
  printf("%s\n", str);
}

void	print_reverse(char *str)
{
  int	i;

  i = strlen(str);
  while (i > 0)
    {
      i--;
      putchar(str[i]);
    }
  putchar('\n');
}

void	print_upper(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	putchar(str[i] - 32);
      else
	putchar(str[i]);
      i++;
    }
  putchar('\n');
}

void	print_42(char *str)
{
  (void)str;
  printf("42\n");
}

void	do_action(t_action action, char *str)
{
  t_ptr_print	print_func[4];
  int		i;

  i = 0;
  print_func[0] = (t_ptr_print)&print_normal;
  print_func[1] = (t_ptr_print)&print_reverse;
  print_func[2] = (t_ptr_print)&print_upper;
  print_func[3] = (t_ptr_print)&print_42;
  print_func[4] = NULL;
  while (print_func[i])
    {
      if (i == (int)action)
	print_func[i](str);
      i++;
    }
}
