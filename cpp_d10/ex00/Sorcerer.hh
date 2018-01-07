//
// Sorcerer.hh for  in /home/munoz_d/piscine_cpp/cpp_d10
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Fri Jan 13 11:19:57 2017 David Munoz
// Last update Fri Jan 13 14:55:15 2017 David Munoz
//

#ifndef SORCERER_H_
#define SORCERER_H_

#include <iostream>
#include <string>
#include "Victim.hh"

class	Sorcerer
{
public:
  Sorcerer(std::string name, std::string title);
  ~Sorcerer();
  std::string	getTitle();
  std::string	getName();
  void		polymorph(Victim const&) const;
  
private:
  std::string	_name;
  std::string	_title;

protected:
  void		dispCreat();
  void		dispDelet();
  
};

std::ostream &operator<<(std::ostream&, Sorcerer&);

#endif /* SORCERER_H_ */
