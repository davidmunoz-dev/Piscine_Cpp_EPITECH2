//
// Toy.cpp for  in /home/munoz_d/piscine_cpp/cpp_d13/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan 16 09:22:52 2017 David Munoz
// Last update Mon Jan 16 17:16:06 2017 David Munoz
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

Toy::~Toy()
{
}

Toy::Error::Error() : type(UNKNOWN)
{
}

std::string	Toy::Error::what() const
{
  if (type == SPEAK)
    return ("wrong mode");
  else if (type == PICTURE)
    return ("bad new illustration");
  else
    return ("");
}

std::string	Toy::Error::where() const
{
  if (type == SPEAK)
    return ("speak_es");
  else if (type == PICTURE)
    return ("setAscii");
  else
    return ("");
}

Toy::Error const Toy::getLastError() const
{
  return (_error);
}

bool	Toy::speak_es(std::string const &state)
{
  (void)state;
  _error.type = Error::SPEAK;
  return (false);
}

void	Toy::speak(std::string const &state)
{
  std::cout << _name << " \"" << state << "\"" << std::endl;
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
  _error.type = Error::PICTURE;
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
