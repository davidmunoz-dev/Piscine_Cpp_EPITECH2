/*
** String.h for  in /home/munoz_d/piscine_cpp/cpp_d03/ex00
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Fri Jan  6 09:43:15 2017 David Munoz
** Last update Fri Jan  6 16:14:26 2017 David Munoz
*/

#ifndef STRING_H_
#define STRING_H_

#include <stdlib.h>

typedef struct	String
{
  char	*str;
  void	(*assign_s)(struct String *this, struct String const *str);
  void	(*assign_c)(struct String *this, char const *s);
  void	(*append_s)(struct String *this, struct String const *ap);
  void	(*append_c)(struct String *this, char const *aps);
  char	(*at)(struct String *this, size_t pos);
  void	(*clear)(struct String *this);
  int	(*size)(struct String *this);
  int	(*compare_s)(struct String *this, struct String const *str);
  int	(*compare_c)(struct String *this, char const *str);
}		String;

void	StringInit(String *this, char const *s);
void	StringDestroy(String *this);

#endif /* STRING_H_ */
