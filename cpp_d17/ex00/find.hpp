//
// find.hpp for  in /home/munoz_d/piscine_cpp/cpp_d17/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Fri Jan 20 10:21:37 2017 David Munoz
// Last update Fri Jan 20 22:02:18 2017 David Munoz
//

#ifndef		_FIND_HPP_
# define	_FIND_HPP_

#include <iostream>
#include <algorithm>

template <typename T>
typename T :: interator do_find(const T& temp_type, int integer)
{
  return (std::find(temp_type.begin(), temp_type.end(), integer));
}

#endif		/* _FIND_HPP_ */
