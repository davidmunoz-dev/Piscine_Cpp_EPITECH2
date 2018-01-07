//
// Peon.cpp for  in /home/munoz_d/piscine_cpp/cpp_d10
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Fri Jan 13 11:20:21 2017 David Munoz
// Last update Fri Jan 13 14:42:38 2017 David Munoz
//

#include "Peon.hh"
#include <string>
#include <iostream>

Peon::Peon(std::string name) : Victim(name)
{
  dispCreat();
}

Peon::~Peon()
{
  dispDelet();
}

void	Peon::getPolymorphed() const
{
  std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

void	Peon::dispCreat()
{
  std::cout << "Zog zog." << std::endl;
}

void	Peon::dispDelet()
{
  std::cout << "Bleuark..." << std::endl;
}
