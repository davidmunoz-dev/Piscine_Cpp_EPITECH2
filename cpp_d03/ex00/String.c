/*
** String.c for  in /home/munoz_d/piscine_cpp/cpp_d03/ex00
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Fri Jan  6 09:43:20 2017 David Munoz
** Last update Fri Jan  6 10:15:21 2017 David Munoz
*/

#include "String.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	StringInit(String *this, char const *s)
{
  if (s == NULL)
    this->str = NULL;
  else
    this->str = strdup(s);
}

void	StringDestroy(String *this)
{
  free(this->str);
}
