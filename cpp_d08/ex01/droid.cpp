//
// droid.cpp for  in /home/munoz_d/piscine_cpp/cpp_d08/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Wed Jan 11 09:21:24 2017 David Munoz
// Last update Thu Jan 12 09:30:41 2017 David Munoz
//

#include <string>
#include <iostream>
#include "droid.hh"


//CONSTRUCTOR
Droid::Droid(std::string Id) : _Energy(50), _Attack(25), _Toughness(15)
{
  this->_Id = Id;
  this->_Status = new std::string("Standing by");
  std::cout << "Droid '" << getId() << "' Activated" << std::endl;
}

//COPY
Droid::Droid(Droid const& clone) : _Id(clone._Id), _Energy(clone._Energy), _Attack(clone._Attack), _Toughness(clone._Toughness), _Status(clone._Status)
{
  std::cout << "Droid '" << getId() << "' Activated, Memory Dumped" << std::endl;
}

//DESTRUCTOR
Droid::~Droid()
{
  std::cout << "Droid '" << getId() << "' Destroyed" << std::endl;
}

void		Droid::setId(std::string Id)
{
  this->_Id = Id;
}
std::string	Droid::getId() const
{
  return (this->_Id);
}

void		Droid::setEnergy(size_t Energy)
{
  this->_Energy = Energy;
}
size_t		Droid::getEnergy()	const
{
  return (this->_Energy);
}

size_t		Droid::getAttack()	const
{
  return (this->_Attack);
}

size_t		Droid::getToughness()	const
{
  return (this->_Toughness);
}

void		Droid::setStatus(std::string *Status)
{
  this->_Status = Status;
}
std::string	*Droid::getStatus()	const
{
  return (this->_Status);
}

bool		Droid::operator==(Droid const& clone) const
{
  if ((this->_Id.compare(clone._Id) == 0)		&&
      this->_Energy == clone._Energy			&&
      this->_Attack == clone._Attack			&&
      this->_Toughness == clone._Toughness		&&
      (this->_Status->compare(*(clone._Status)) == 0))
    return (true);
  return (false);
}

bool	Droid::operator!=(Droid const& clone) const
{
  return !(*this == clone);
}

Droid	&Droid::operator<<(size_t &muni)
{
  if (_Energy + muni >= 100)
    {
      muni = muni - (100 - _Energy);
      _Energy = 100;
    }
  else
    {
      _Energy = _Energy + muni;
      muni = 0;
    }
  return (*this);
}

Droid	&Droid::operator=(Droid const& clone)
{
  _Id = clone._Id;
  _Energy = clone._Energy;
  _Status = new std::string(*(clone._Status));
  return (*this);
}

std::ostream& operator<<(std::ostream &os, Droid const &d)
{
  return (os << "Droid '" << d.getId() << "', " << *(d.getStatus()) << ", " << d.getEnergy());
}
