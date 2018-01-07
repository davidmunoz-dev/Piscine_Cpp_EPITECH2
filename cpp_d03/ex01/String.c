/*
** String.c for  in /home/munoz_d/piscine_cpp/cpp_d03/ex00
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Fri Jan  6 09:43:20 2017 David Munoz
** Last update Fri Jan  6 14:12:19 2017 David Munoz
*/

#include "String.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	StringDestroy(String *this)
{
  free(this->str);
}

static void	assign_c(String *this, char const *s)
{
  if (s && this)
    this->str = strdup(s);
}

static void	assign_s(String *this, String const *str)
{
  if (str && this)
    assign_c(this, str->str);
}

void	StringInit(String *this, char const *s)
{
  if (s == NULL)
    this->str = NULL;
  else
    {
      this->str = strdup(s);
      this->assign_s = &assign_s;
      this->assign_c = &assign_c;
    }
}
