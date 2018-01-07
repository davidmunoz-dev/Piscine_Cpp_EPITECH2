/*
** Picture.h for  in /home/munoz_d/piscine_cpp/cpp_d13/ex00
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Mon Jan 16 09:23:59 2017 David Munoz
** Last update Mon Jan 16 09:46:18 2017 David Munoz
*/

#ifndef		_PICTURE_H_
# define	_PICTURE_H_

#include	<string>
#include	<iostream>

class		Picture
{
 public:

  Picture();
  Picture(const std::string &file);
  ~Picture();
  
  std::string	data;
  bool		getPictureFromFile(const std::string &file);

};

#endif		/* _PITCTURE_H_ */
