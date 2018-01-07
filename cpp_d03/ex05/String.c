/*
** String.c for  in /home/munoz_d/piscine_cpp/cpp_d03/ex00
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Fri Jan  6 09:43:20 2017 David Munoz
** Last update Fri Jan  6 16:08:09 2017 David Munoz
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

static void	append_s(String *this, String const *ap)
{
  if (ap && ap->str && this)
    {
      if (this->str)
	this->str = strcat(this->str, ap->str);
      else
	this->str = strdup(ap->str);
    }
}

static void	append_c(String *this, char const *aps)
{
  if (aps && this)
    {
      if (this->str != NULL)
	this->str = strcat(this->str, aps);
      else
	this->str = strdup(aps);
    }
}

static char	at(String *this, size_t pos)
{
  size_t	i;

  i = 0;
  if (this && this->str)
    {
      while (this->str[i])
	{
	  if (i == pos)
	    return (this->str[i]);
	  i++;
	}
    }
  return (-1);
}

static void	clear(String *this)
{
  if (this->str && this)
    memset(this->str, 0, strlen(this->str));
}

static int	size(String *this)
{
  int	size;

  size = 0;
  if (this && this->str)
    {
      size = strlen(this->str);
      return (size);
    }
  return (-1);
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
      this->append_s = &append_s;
      this->append_c = &append_c;
      this->at = &at;
      this->clear = &clear;
      this->size = &size;
    }
}
