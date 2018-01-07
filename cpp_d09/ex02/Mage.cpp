//
// Mage.cpp for  in /home/munoz_d/piscine_cpp/cpp_d09/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Thu Jan 12 19:13:24 2017 David Munoz
// Last update Fri Jan 13 01:44:28 2017 David Munoz
//

#include "Mage.hh"

Mage::Mage(std::string const &name, int level) : Character(name, level)
{
  _strength = 6;
  _stamina = 6;
  _intelligence = 12;
  _spirit = 11;
  _agility = 7;
  Range = CLOSE;
}

Mage::~Mage()
{
}

int		Mage::CloseAttack()
{
  if (_power >= 10)
    {
      _power -= 10;
      std::cout << _name << " blinks" << std::endl;
      Range = RANGE;
      return (0);
    }
  std::cout << _name << " out of power" << std::endl;
  return (0);
}

void		Mage::RestorePower()
{
  _power += (50 + _intelligence);
  if (_power > 100)
    _power = 100;
  std::cout << _name << " takes a mana potion" << std::endl;
}

