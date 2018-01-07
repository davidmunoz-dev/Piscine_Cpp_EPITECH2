/*
** sickkoala.h for  in /home/munoz_d/piscine_cpp/cpp_d06/ex02
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Mon Jan  9 12:29:50 2017 David Munoz
** Last update Mon Jan  9 14:03:55 2017 David Munoz
*/

#ifndef _KOALA_H_
#define _KOALA_H_

class	SickKoala
{
  std::string name;
  
 public:
  SickKoala(std::string name);
  ~SickKoala();

  void	setName(std::string);
  int	takeDrug(std::string);
  std::string getName();
  void	overDrive(std::string);
  void	poke();
  int	takeDrug();
};

#endif /* _KOALA_H_ */
