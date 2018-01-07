/*
** koalanurse.h for  in /home/munoz_d/piscine_cpp/cpp_d06/ex03
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Mon Jan  9 16:38:20 2017 David Munoz
** Last update Tue Jan 10 08:11:54 2017 David Munoz
*/

#include "sickkoala.h"

#ifndef _KOALA_NURSE_H_
#define _KOALA_NURSE_H_

class	KoalaNurse
{
  int	id;
  
 public:
  KoalaNurse(int id);
  ~KoalaNurse();

  void	giveDrug(std::string, SickKoala *patient);
  int	getID();
  void	timeCheck();
  std::string readReport(std::string);
};

#endif /* _KOALA_NURSE_H_ */
