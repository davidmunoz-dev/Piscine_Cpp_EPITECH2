//
// droid.hh for  in /home/munoz_d/piscine_cpp/cpp_d08/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Wed Jan 11 09:21:17 2017 David Munoz
// Last update Wed Jan 11 20:59:57 2017 David Munoz
//

#include <string>

#ifndef _DROID_HH_
#define _DROID_HH_

class	Droid
{
public:
  Droid(std::string Id ="");
  Droid(Droid const&);
  ~Droid();
  void		setId(std::string Id);
  std::string	getId()	const;
  
  void		setEnergy(size_t Energy);
  size_t	getEnergy()	const;
  
  size_t 	getAttack()	const;
  
  size_t 	getToughness()	const;
  
  void		setStatus(std::string *Status);
  std::string	*getStatus()	const;

  Droid		&operator<<(size_t &);
  Droid		&operator=(Droid const &);
  bool		operator==(Droid const &) const;
  bool		operator!=(Droid const &) const;
  
private:
  std::string	_Id;
  size_t	_Energy;
  size_t const	_Attack;
  size_t const	_Toughness;
  std::string	*_Status;
};

std::ostream &operator<<(std::ostream&, Droid const&);

#endif /* _DROID_HH_ */
