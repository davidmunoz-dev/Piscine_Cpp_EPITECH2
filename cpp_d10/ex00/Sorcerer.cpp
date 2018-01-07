//
// Sorcerer.cpp for  in /home/munoz_d/piscine_cpp/cpp_d10
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Fri Jan 13 11:20:03 2017 David Munoz
// Last update Fri Jan 13 15:05:50 2017 David Munoz
//

#include "Sorcerer.hh"

Sorcerer::Sorcerer(std::string name, std::string title)
{
  _name = name;
  _title = title;
  dispCreat();
}

Sorcerer::~Sorcerer()
{
  dispDelet();
}

//	GET INFORMATIONS
std::string	Sorcerer::getTitle()
{
  return (_title);
}

std::string	Sorcerer::getName()
{
  return (_name);
}

void	Sorcerer::polymorph(Victim const &victim) const
{
  victim.getPolymorphed();
}

//	MESSAGES INFORMATIONS & OPERATOR
void		Sorcerer::dispDelet()
{
  std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

void		Sorcerer::dispCreat()
{
  std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Sorcerer &s)
{
  return (os << "I am "<< s.getName() << ", " << s.getTitle() << ", and I like ponies !" << std::endl);
}
