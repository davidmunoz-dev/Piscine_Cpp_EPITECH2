//
// Victim.hh for  in /home/munoz_d/piscine_cpp/cpp_d10
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Fri Jan 13 11:20:09 2017 David Munoz
// Last update Fri Jan 13 14:43:52 2017 David Munoz
//

#ifndef _VICTIM_HH_
#define _VICTIM_HH_

#include <string>

class	Victim
{
public:
  Victim(std::string name);
  virtual ~Victim();
  virtual void	getPolymorphed() const;
  std::string   getName();

protected:
  void		dispDelet();
  void		dispCreat();
  std::string   _name;

};

std::ostream& operator<<(std::ostream&, Victim&);

#endif /* _VICTIM_HH_ */
