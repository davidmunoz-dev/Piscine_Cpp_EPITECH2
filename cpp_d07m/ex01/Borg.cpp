//
// Borg.cpp for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex01
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 15:27:56 2017 David Munoz
// Last update Tue Jan 10 16:55:32 2017 David Munoz
//

#include <iostream>
#include <string>
#include "WarpSystem.hh"
#include "Federation.hh"
#include "Borg.hh"

Borg::Ship::Ship()
{
  this->_side = 300;
  this->_maxWarp = 9;

  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
}

Borg::Ship::~Ship()
{

}

void	Borg::Ship::setupCore(WarpSystem::Core *_core)
{
  this->Core = _core;
}

void	Borg::Ship::checkCore()
{
  if (this->Core->checkReactor()->isStable() == true)
    std::cout << "Everything is in order." << std::endl;
  else
    std::cout << "Critical failure imminent." << std::endl;
}
