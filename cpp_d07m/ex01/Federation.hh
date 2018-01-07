//
// Federation.hh for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 09:49:25 2017 David Munoz
// Last update Tue Jan 10 16:49:29 2017 David Munoz
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
    class	Captain
    {
    private:
      std::string	_name;
      int		_age;
    public:
      Captain(std::string);
      ~Captain();
      std::string	getName();
      int		getAge();
      void		setAge(int age);
    };
    class	Ship
    {
    private:
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*Core;
      Captain	*captain;

    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void	setupCore(WarpSystem::Core *_core);
      void	checkCore();
      void	promote(Captain*);
    };
    class	Ensign
    {
    private:
      std::string	_name;
    public:
      Ensign(std::string);
      ~Ensign();
    };
  };
};

#endif /* _FEDERATION_HH_ */
