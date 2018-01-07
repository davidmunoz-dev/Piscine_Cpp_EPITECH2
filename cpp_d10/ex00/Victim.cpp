//
// Victim.cpp for  in /home/munoz_d/piscine_cpp/cpp_d10
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Fri Jan 13 11:20:13 2017 David Munoz
// Last update Fri Jan 13 15:06:59 2017 David Munoz
//

#include "Victim.hh"
#include <string>
#include <iostream>

Victim::Victim(std::string name)
{
  _name = name;
  dispCreat();
}

Victim::~Victim()
{
  dispDelet();
}

//      GET INFORMATIONS
std::string     Victim::getName()
{
  return (_name);
}

void		Victim::getPolymorphed() const
{
  std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

//      MESSAGES INFORMATIONS & OPERATOR      
void            Victim::dispDelet()
{
  std::cout << "Victim "<< _name << " just died for no apparent reason !" << std::endl;
}

void            Victim::dispCreat()
{
  std::cout << "Some random victim called "<< _name << " just popped !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim &v)
{
  return (os << "I'm "<< v.getName() << " and i like otters !" << std::endl);
}
