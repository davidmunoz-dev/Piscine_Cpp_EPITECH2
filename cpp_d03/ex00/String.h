/*
** String.h for  in /home/munoz_d/piscine_cpp/cpp_d03/ex00
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Fri Jan  6 09:43:15 2017 David Munoz
** Last update Fri Jan  6 21:34:26 2017 David Munoz
*/

#ifndef STRING_H_
#define STRING_H_

typedef struct	String
{
  char	*str;
}		String;

void	StringInit(String *this, char const *s);
void	StringDestroy(String *this);

#endif /* STRING_H_ */
