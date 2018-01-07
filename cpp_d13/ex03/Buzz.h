/*
** Woody.h for  in /home/munoz_d/piscine_cpp/cpp_d13/ex02
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Mon Jan 16 11:58:58 2017 David Munoz
** Last update Mon Jan 16 15:47:16 2017 David Munoz
*/

#ifndef		_BUZZ_H_
# define	_BUZZ_H_

#include	"Toy.h"

class		Buzz : public Toy
{
 public:
  Buzz(std::string const &name, std::string const &file="buzz.txt");
  ~Buzz();

  virtual void speak(std::string const &state);
};

#endif		/* _BUZZ_H_ */
