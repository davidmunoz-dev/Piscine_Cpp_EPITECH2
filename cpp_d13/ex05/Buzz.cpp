//
// Buzz.cpp for  in /home/munoz_d/piscine_cpp/cpp_d13/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan 16 12:10:04 2017 David Munoz
// Last update Mon Jan 16 17:08:46 2017 David Munoz
//

#include	"Buzz.h"
#include	<string>

Buzz::Buzz(std::string const &name, std::string const &file) : Toy(BUZZ, name, file)
{
}

Buzz::~Buzz()
{
}

void	Buzz::speak(std::string const &state)
{
  std::cout << "BUZZ: " << _name << " \"" << state << "\"" << std::endl;
}

bool	Buzz::speak_es(std::string const &state)
{
  std::cout << "BUZZ: " << _name << " senorita \"" << state << "\" senorita" << std::endl;
  return (true);
}
