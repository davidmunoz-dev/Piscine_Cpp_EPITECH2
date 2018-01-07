//
// Woody.cpp for  in /home/munoz_d/piscine_cpp/cpp_d13/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan 16 12:04:26 2017 David Munoz
// Last update Mon Jan 16 15:46:36 2017 David Munoz
//

#include	"Woody.h"

Woody::Woody(std::string const &name, std::string const &file) : Toy(WOODY, name, file)
{
}

Woody::~Woody()
{
}

void Woody::speak(std::string const &state)
{
  std::cout << "WOODY: " << _name << " \"" << state << "\"" << std::endl;
}
