//
// Borg.hh for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex01
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 15:27:50 2017 David Munoz
// Last update Tue Jan 10 17:37:52 2017 David Munoz
//

#include <string>
#include <iostream>
#include "Destination.hh"

#ifndef _BORG_HH_
#define _BORG_HH_

namespace	Borg
{
  class	Ship
  {
  private:
    int		_side;
    short	_maxWarp;
    WarpSystem::Core *Core;
    Destination _location;
    Destination _home;
  public:
    Ship();
    ~Ship();
    void	setupCore(WarpSystem::Core *_core);
    void	checkCore();
    bool	move(int warp, Destination d);
    bool	move(int warp);
    bool	move(Destination d);
    bool	move();
  };
};

#endif	/*_ BORG_H_ */
