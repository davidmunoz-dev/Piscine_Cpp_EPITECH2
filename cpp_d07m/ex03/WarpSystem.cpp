//
// WarpSystem.cpp for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 15:19:26 2017 David Munoz
// Last update Tue Jan 10 15:20:45 2017 David Munoz
//

#include "WarpSystem.hh"
#include "Federation.hh"
#include <iostream>
#include <string>


//Constructor QUANTUM REACTOR
WarpSystem::QuantumReactor::QuantumReactor()
{
  this->_stability = true;
}

//Destructor QUANTUM REACTOR
WarpSystem::QuantumReactor::~QuantumReactor()
{

}

bool	WarpSystem::QuantumReactor::isStable()
{
  return (this->_stability);
}

void	WarpSystem::QuantumReactor::setStability(bool stability)
{
  this->_stability = stability;
}

//Constructor CORE
WarpSystem::Core::Core(QuantumReactor *coreReactor)
{
  this->_coreReactor = coreReactor;
}

//Destructor CORE
WarpSystem::Core::~Core()
{

}

WarpSystem::QuantumReactor*	WarpSystem::Core::checkReactor()
{
  return (this->_coreReactor);
}
