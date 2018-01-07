//
// Priest.hh for  in /home/munoz_d/piscine_cpp/cpp_d09/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Thu Jan 12 19:13:37 2017 David Munoz
// Last update Fri Jan 13 09:14:20 2017 David Munoz
//

#ifndef		PRIEST_HH_
#define		PRIEST_HH_

#include	"Mage.hh"

class Priest : public Mage
{
public:
  explicit Priest(std::string const& name, int level);
  ~Priest();

  int	CloseAttack();
  void	Heal();
};

#endif /* PRIEST_HH_ */
