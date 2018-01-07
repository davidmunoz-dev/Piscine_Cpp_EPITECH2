/*
** Woody.h for  in /home/munoz_d/piscine_cpp/cpp_d13/ex02
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Mon Jan 16 11:58:58 2017 David Munoz
** Last update Mon Jan 16 15:10:37 2017 David Munoz
*/

#ifndef		_WOODY_H_
# define	_WOODY_H_

#include	"Toy.h"

class		Woody : public Toy
{
 public:
  Woody(std::string const &name, std::string const &file="woody.txt");
  ~Woody();

  virtual void speak(std::string const &state);
};

#endif		/* _WOODY_H_ */
