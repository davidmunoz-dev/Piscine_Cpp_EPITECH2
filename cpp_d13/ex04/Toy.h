/*
** Toy.h for  in /home/munoz_d/piscine_cpp/cpp_d13/ex00
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Mon Jan 16 09:22:06 2017 David Munoz
** Last update Mon Jan 16 16:12:35 2017 David Munoz
*/

#ifndef		_TOY_H_
# define	_TOY_H_

#include	"Picture.h"
#include	<iostream>
#include	<string>

class		Toy
{
 public:
  typedef enum	ToyType
  {
    BASIC_TOY,
    BUZZ,
    WOODY,
    ALIEN
  }		ToyType;
  
  Toy();
  Toy(ToyType type, std::string const &name, std::string const &picture);
  Toy(const Toy &newtoy);
  ~Toy();
  Toy &operator=(const Toy &newtoy);
  Toy &operator<<(std::string const &newtoy);
  
  ToyType		getType() const;
  std::string const	getName() const;
  void			setName(std::string const &name);
  virtual void		speak(std::string const & state);
  
  std::string const	getAscii() const;
  bool			setAscii(std::string filename);
  
 protected:
  ToyType	_type;
  std::string	_name;
  Picture	_picture;
};

std::ostream &operator<<(std::ostream &os, Toy const &toy);

#endif		/* _TOY_H_ */
