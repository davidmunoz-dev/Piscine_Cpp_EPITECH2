//
// Mage.hh for  in /home/munoz_d/piscine_cpp/cpp_d09/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Thu Jan 12 19:13:28 2017 David Munoz
// Last update Fri Jan 13 01:42:39 2017 David Munoz
//

#ifndef		MAGE_H_
#define		MAGE_H_

#include	"Character.hh"

class Mage : public Character
{
public:
  Mage(std::string const& name, int level);
  ~Mage();

  int	CloseAttack();
  void	RestorePower();
};

#endif
