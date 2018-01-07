//
// Warrior.cpp for  in /home/munoz_d/piscine_cpp/cpp_d09/ex01
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Thu Jan 12 18:15:53 2017 David Munoz
// Last update Fri Jan 13 01:31:13 2017 David Munoz
//

#include "Warrior.hh"
#include "Character.hh"

Warrior::Warrior(const std::string &name, int level) : Character(name, level)
{
  _strength = 12;
  _stamina = 12;
  _intelligence = 6;
  _spirit = 5;
  _agility = 7;
  _pV = 100;
  _power = 100;
  _race = "Dwarf";
  _weaponName = "hammer";
  Range = Character::CLOSE;
  std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int	Warrior::CloseAttack()
{
  int   dommage = 0;

  if (_power >= 30)
    {
      _power -= 30;
      dommage = 20 + _strength;
      std::cout << _name << " strikes with his " << _weaponName << std::endl;
    }
  else
    std::cout << _name << " out of power" << std::endl;
  return (dommage);
}

int	Warrior::RangeAttack()
{
  int	dommage = 0;

  if (_power >= 10)
    {
      _power -= 10;
      std::cout << _name << " intercepts" << std::endl;
      Range = Character::CLOSE;
    }
  else
    std::cout << _name << " out of power" << std::endl;
  return (dommage);
}
