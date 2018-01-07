//
// Borg.hh for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex01
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 15:27:50 2017 David Munoz
// Last update Tue Jan 10 15:49:57 2017 David Munoz
//

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
  public:
    Ship();
    ~Ship();
    void	setupCore(WarpSystem::Core *_core);
    void	checkCore();
  };
};

#endif	/*_ BORG_H_ */
