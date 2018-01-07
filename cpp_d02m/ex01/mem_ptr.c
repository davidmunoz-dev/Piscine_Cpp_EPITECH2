/*
** mem_ptr.c for  in /home/munoz_d/piscine_cpp/cpp_d02m/ex01
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan  5 08:30:12 2017 David Munoz
** Last update Thu Jan  5 11:11:58 2017 David Munoz
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "mem_ptr.h"

void	add_str_struct(t_str_op *str_op)
{
  char *tmp;

  if ((tmp = malloc(strlen(str_op->str1) + strlen(str_op->str2) * sizeof(char))) == NULL)
    exit(84);
  tmp = strcat(tmp, str_op->str1);
  tmp = strcat(tmp, str_op->str2);
  str_op->res = tmp;
}

void	add_str(char *str1, char *str2, char **res)
{
  char	*tmp;

  if ((tmp = malloc(strlen(str1) + strlen(str2) * sizeof(char))) == NULL)
    exit(84);
  tmp = strcat(tmp, str1);
  tmp = strcat(tmp, str2);
  *res = tmp;
}
