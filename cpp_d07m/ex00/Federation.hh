//
// Federation.hh for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 09:49:25 2017 David Munoz
// Last update Tue Jan 10 14:56:35 2017 David Munoz
//

#include <string>
#include "WarpSystem.hh"

#ifndef _FEDERATION_HH_
#define _FEDERATION_HH_

namespace	Federation
{
  class	Ship
  {
  private:
    int		_length;
    int		_width;
    std::string	_name;
    short	_maxWarp;
    WarpSystem::Core	*Core;
  public:
    Ship(int length, int width, std::string name);
    ~Ship();
    
    void	setupCore(WarpSystem::Core *_core);
    void	checkCore();
  };
  namespace	Starfleet
  {
    class	Ship
    {
    private:
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*Core;

    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();

      void	setupCore(WarpSystem::Core *_core);
      void	checkCore();
    };
  };
};

#endif /* _FEDERATION_HH_ */
