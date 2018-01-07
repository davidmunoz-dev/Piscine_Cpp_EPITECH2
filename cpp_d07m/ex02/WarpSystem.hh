//
// WarpSystem.hh for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 10:30:51 2017 David Munoz
// Last update Tue Jan 10 13:47:29 2017 David Munoz
//

#include <string>

#ifndef _WARP_SYSTEM_HH_
#define _WARP_SYSTEM_HH_

namespace	WarpSystem
{
  class	QuantumReactor
  {
    bool _stability;

  public:
    bool	isStable();
    void	setStability(bool);
    QuantumReactor();
    ~QuantumReactor();
  };
  
  class	Core
  {
    QuantumReactor	*_coreReactor;

  public:
    Core(QuantumReactor *coreReactor);
    ~Core();

    WarpSystem::QuantumReactor*	checkReactor();
  };
};

#endif /* _WARP_SYSTEM_HH_ */
