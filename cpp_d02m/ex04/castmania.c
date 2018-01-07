/*
** castmania.c for  in /home/munoz_d/piscine_cpp/cpp_d02m/ex04
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan  5 10:26:40 2017 David Munoz
** Last update Thu Jan  5 11:25:49 2017 David Munoz
*/

#include <stdio.h>
#include "castmania.h"

int		main(void)
{
  int		i = 5;
  float		f = 42.5;
  t_instruction	inst;
  t_add		add;
  t_div		div;
  t_integer_op	int_op;

  printf("Display i: ");
  exec_instruction(PRINT_INT, &i);
  printf("Display f: ");
  exec_instruction(PRINT_FLOAT, &f);
  printf("\n");

  int_op.a = 10;
  int_op.b = 3;
  /* add.add_type = ABSOLUTE; */
  /* add.add_op = int_op; */
  /* inst.output_type = VERBOSE; */
  /* inst.operation = &add; */
  /* printf("10 + 3 = "); */
  /* exec_instruction(ADD_OPERATION, &inst); */
  /* printf("indeed, 10 + 3 = %d\n\n", add.add_op.res); */

  div.div_type = INTEGER;
  div.div_op = &int_op;
  inst.operation = &div;
  printf("10 / 3 = ");
  exec_instruction(DIV_OPERATION, &inst);
  printf("Indeed, 10 / 3 = %d\n\n", int_op.res);
}
