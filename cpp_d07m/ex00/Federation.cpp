//
// Federation.cpp for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 10:00:29 2017 David Munoz
// Last update Tue Jan 10 16:35:40 2017 David Munoz
//

#include "WarpSystem.hh"
#include "Federation.hh"
#include <iostream>
#include <string>

//Constructor SHIP
Federation::Starfleet::Ship::Ship(int length, int width,
			    std::string name, short maxWarp)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  std::cout << "The ship USS " << name << " has been finished. It is " << length << " m in length and " << width << " m in width."<< std::endl;;
  std::cout << "It can go to Warp " << maxWarp << "!" << std::endl;
}

//Destructor SHIP
Federation::Ship::~Ship()
{
  
}

//CONSTRUCTION SHIP
Federation::Ship::Ship(int length, int width,
		       std::string name)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = 1;
  std::cout <<"The independant ship "<< name <<" just finished its construction. It is " << length << " m in length and " << width << " m in width."<<std::endl;
}

//Destructor SHIP
Federation::Starfleet::Ship::~Ship()
{
  
}

void	Federation::Starfleet::Ship::setupCore(WarpSystem::Core *_core)
{
  this->Core = _core;
  std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void	Federation::Starfleet::Ship::checkCore()
{
  if (this->Core->checkReactor()->isStable() == true)
    {
      std::cout << "USS " << this->_name << ": The core is stable at the time." << std::endl;
    }
  else
    std::cout << "USS " << this->_name << ": The core is unstable at the time." << std::endl;
}

//Constructor QUANTUM REACTOR

void	Federation::Ship::setupCore(WarpSystem::Core *_core)
{
  this->Core = _core;
  std::cout << this->_name << ": The core is set." << std::endl;
}

void	Federation::Ship::checkCore()
{
  if (this->Core->checkReactor()->isStable() == true)
    {
      std::cout << this->_name << ": The core is stable at the time." << std::endl;
    }
  else
    std::cout << this->_name << ": The core is unstable at the time." << std::endl;
}
