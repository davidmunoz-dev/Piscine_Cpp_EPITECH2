//
// Borg.cpp for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex01
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 15:27:56 2017 David Munoz
// Last update Tue Jan 10 18:06:53 2017 David Munoz
//

#include <iostream>
#include <string>
#include "WarpSystem.hh"
#include "Federation.hh"
#include "Borg.hh"

//Construction
Borg::Ship::Ship()
{
  this->_side = 300;
  this->_maxWarp = 9;
  this->_home = UNICOMPLEX;
  this->_location = this->_home;
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
}

//Desctruction
Borg::Ship::~Ship()
{

}


//CORE
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
//ENDCORE

bool	Borg::Ship::move(int warp, Destination d)
{
  this->_location = d;
  if (warp <= this->_maxWarp && d != this->_location && this->Core->checkReactor()->isStable() == true)
    return true;
  return false;
}

bool	Borg::Ship::move(int warp)
{
  this->_location = this->_home;
  if (warp <= this->_maxWarp && this->Core->checkReactor()->isStable() == true)
    return true;
  return false;
}

bool	Borg::Ship::move(Destination d)
{
  this->_location = d;
  if (d != this->_location && this->Core->checkReactor()->isStable() == true)
    return true;
  return false;
}

bool	Borg::Ship::move()
{
  this->_location = this->_home;
  if (this->Core->checkReactor()->isStable() == true)
    return true;
  return false;
}
