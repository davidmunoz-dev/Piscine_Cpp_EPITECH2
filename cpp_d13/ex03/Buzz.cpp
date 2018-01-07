//
// Buzz.cpp for  in /home/munoz_d/piscine_cpp/cpp_d13/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan 16 12:10:04 2017 David Munoz
// Last update Mon Jan 16 15:46:42 2017 David Munoz
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
