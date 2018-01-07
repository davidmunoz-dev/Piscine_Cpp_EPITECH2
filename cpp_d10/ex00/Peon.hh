//
// Peon.hh for  in /home/munoz_d/piscine_cpp/cpp_d10
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Fri Jan 13 11:20:24 2017 David Munoz
// Last update Fri Jan 13 14:44:08 2017 David Munoz
//

#ifndef PEON_H_
#define PEON_H_

#include	"Victim.hh"

class		Peon : public	Victim
{
public:
  Peon(std::string name);
  virtual ~Peon();
  virtual void  getPolymorphed() const;
  
protected:
  void		dispCreat();
  void		dispDelet();
  std::string	name;
};


#endif	/* PEON_H_ */
