//
// Character.hh for  in /home/munoz_d/piscine_cpp/cpp_d09/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Thu Jan 12 15:12:06 2017 David Munoz
// Last update Thu Jan 12 18:23:10 2017 David Munoz
//

#ifndef _CHARACTER_HH_
#define _CHARACTER_HH_

#include <string>
#include <iostream>

typedef	enum	e_AttackRange
{
  _RANGE,
  _CLOSE
}		AttackRange;

class	Character
{
  protected:
  std::string _name;
  int	_level;
  int	_pV;
  int	_power;
  int	_strength;
  int	_stamina;
  int	_intelligence;
  int	_spirit;
  int	_agility;
  std::string	_race;

public:
  Character(const std::string &name, int level);
  ~Character();
  const std::string &getName() const;
  int	getLvl() const;
  int	getPv() const;
  int	getPower() const;
  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
  void	RestorePower();
  void	TakeDamage(int damage);
  AttackRange	Range;
  const	static	AttackRange RANGE = _RANGE;
  const	static	AttackRange CLOSE = _CLOSE;
};

#endif	/* _CHARACTER_HH_ */
