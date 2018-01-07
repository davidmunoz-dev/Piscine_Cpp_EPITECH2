//
// Warrior.hh for  in /home/munoz_d/piscine_cpp/cpp_d09/ex01
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Thu Jan 12 18:15:57 2017 David Munoz
// Last update Fri Jan 13 01:21:57 2017 David Munoz
//

#ifndef WARRIOR_HH_
#define WARRIOR_HH_

#include "Character.hh"

class	Warrior	: public	Character
{
private:
  std::string	_weaponName;
public:
  Warrior(const std::string &name, int level);
  ~Warrior();
  int	CloseAttack();
  int	RangeAttack();
};

#endif /* WARRIOR_HH_ */

