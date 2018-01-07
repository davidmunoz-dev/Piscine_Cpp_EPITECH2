//
// sickkoala.cpp for  in /home/munoz_d/piscine_cpp/cpp_d06/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan  9 12:30:11 2017 David Munoz
// Last update Tue Jan 10 00:45:37 2017 David Munoz
//

#include <iostream>
#include <string>
#include "sickkoala.h"

//Constructor
SickKoala::SickKoala(std::string name)
{
  this->name = name;
}

//Destructor
SickKoala::~SickKoala()
{
  std::cout << "Mr. " << SickKoala::getName() << ": Kreooogg!! Je suis gueriiii!" << std::endl;
}

void	SickKoala::setName(std::string name)
{
  this->name = name;
}

void	SickKoala::poke()
{
  std::cout << "Mr. " << SickKoala::getName() << ": Gooeeeeerrk!! :'(" << std::endl;
}

int	SickKoala::takeDrug(std::string drug)
{
  if (drug == "mars")
    {
      std::cout << "Mr. " << SickKoala::getName() << ": Mars, et ca kreog!" << std::endl;
      return (true);
    }
  else if (drug == "Buronzand")
    {
      std::cout << "Mr. " << SickKoala::getName() << ": Et la fatique a fait son temps!" << std::endl;
      return (true);
    }
  std::cout << "Mr. " << SickKoala::getName() << ": Goerkreog!" << std::endl;
  return (false);
}

void	SickKoala::overDrive(std::string msg)
{
  std::size_t nb;

  while ((nb = msg.find("Kreog!")) != std::string::npos)
    msg.replace(nb, 5, "1337!");
  std::cout << "Mr. " << SickKoala::getName() << ": " << msg  << std::endl;
}

std::string SickKoala::getName()
{
  return (this->name);
}
