//
// Toy.cpp for  in /home/munoz_d/piscine_cpp/cpp_d13/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan 16 09:22:52 2017 David Munoz
// Last update Mon Jan 16 16:13:13 2017 David Munoz
//

#include "Toy.h"


Toy::Toy() : _type(BASIC_TOY), _name("toy"), _picture()
{
}

Toy::Toy(ToyType type, std::string const &name, std::string const &picture) : _type(type), _name(name), _picture(picture)
{
}

Toy::Toy(const Toy &newtoy)
{
  _type = newtoy._type;
  _name = newtoy._name;
  _picture = newtoy._picture;
}

void	Toy::speak(std::string const &state)
{
  std::cout << _name << " \"" << state << "\"" << std::endl;
}

Toy::~Toy()
{
}

Toy::ToyType		Toy::getType() const
{
  return (_type);
}

std::string const	Toy::getName() const
{
  return (_name);
}

void		Toy::setName(std::string const &name)
{
  _name = name;
}

bool		Toy::setAscii(std::string filename)
{
  if (_picture.getPictureFromFile(filename) == true)
    return (true);
  return (false);
}

std::string const	Toy::getAscii() const
{
  return (_picture.data);
}

Toy	&Toy::operator=(const Toy &newtoy)
{
  _type = newtoy._type;
  _name = newtoy._name;
  _picture = newtoy._picture; 
  return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Toy &newtoy)
{
  os << newtoy.getName() << std::endl;
  os << newtoy.getAscii() << std::endl;
  return (os);
}


Toy	&Toy::operator<<(const std::string &newtoy)
{
  _picture.data = newtoy;
  return (*this);
}
