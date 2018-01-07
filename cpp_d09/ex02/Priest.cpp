//
// Priest.cpp for  in /home/munoz_d/piscine_cpp/cpp_d09/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Thu Jan 12 19:13:34 2017 David Munoz
// Last update Fri Jan 13 09:20:57 2017 David Munoz
//

#include "Priest.hh"

Priest::Priest(std::string const &name, int level) : Mage(name, level)
{
  _strength = 4;
  _stamina = 4;
  _intelligence = 42;
  _spirit = 21;
  _agility = 2;
  _pV = 100;
  _power = 100;
  _race = "Gnome";
  
  Range = Character::CLOSE;
}

Priest::~Priest()
{
}

int	Priest::CloseAttack()
{
  int   dommage = 0;

  if (_power >= 10)
    {
      _power -= 10;
      dommage = 10 + _spirit;
      std::cout << _name << " uses a spirit explosion" << std::endl;
    }
  else
    std::cout << _name << " out of power" << std::endl;
  return (dommage);
}

void		Priest::Heal()
{
  if (_power >= 10)
    {
      _power -= 10;
      std::cout << _name << " casts a little heal spell" << std::endl;
      _pV += 70;
      if (_pV > 100)
	_pV = 100;
    }
  else
    std::cout << _name << " out of power" << std::endl;    
}
