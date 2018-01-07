//
// Character.cpp for  in /home/munoz_d/piscine_cpp/cpp_d09/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Thu Jan 12 15:12:11 2017 David Munoz
// Last update Fri Jan 13 01:27:42 2017 David Munoz
//

#include "Character.hh"

//CTOR
Character::Character(const std::string &name, int level) : _name(name), _level(level),
							   _pV(100), _power(100), _strength(5),
							   _stamina(5), _intelligence(5),
							   _spirit(5), _agility(5),
							   _race("Koala"), Range(CLOSE)
{
  std::cout << this->_name << " Created" << std::endl;
}

//DTOR
Character::~Character()
{
}

const std::string	&Character::getName() const
{
  return (_name);
}

int	Character::getLvl() const
{
  return (_level);
}
int	Character::getPv() const
{
  return (_pV);
}

int	Character::getPower() const
{
  return (_power);
}

int	Character::CloseAttack()
{
  int	dommage = 0;

  if (_power >= 10)
    {
      _power -= 10;
      dommage = 10 + _strength;
      std::cout << _name << " strikes with a wood stick" << std::endl;
    }
  else
    std::cout << _name << " out of power" << std::endl;
  return (dommage);
}

int	Character::RangeAttack()
{
  int	dommage = 0;

  if (_power >= 10)
    {
      _power -= 10;
      dommage = 5 + _strength;
      std::cout << _name << " launches a stone" << std::endl;
    }
  else
    std::cout << _name << " out of power" << std::endl;
  return (dommage);
}

void	Character::Heal()
{
  if (_pV >= 50)
    _pV = 100;
  else
    _pV += 50;
  std::cout << _name << " takes a potion" << std::endl;
}

void	Character::RestorePower()
{
  _power = 100;
  std::cout << _name << " eats" << std::endl;
}

void  Character::TakeDamage(int damage)
{
  if (_pV - damage <= 0)
    {
      std::cout << _name << " out of combat" << std::endl;
      _pV = 0;
    }
  else
    {
      std::cout << _name << " takes " << damage << " damage" << std::endl;
      _pV -= damage;
    }
}
