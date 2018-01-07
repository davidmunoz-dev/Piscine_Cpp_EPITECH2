//
// main.cpp for  in /home/munoz_d/piscine_cpp/cpp_d07m/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Tue Jan 10 10:08:17 2017 David Munoz
// Last update Tue Jan 10 18:11:10 2017 David Munoz
//

#include "Federation.hh"
#include "WarpSystem.hh"
#include "Borg.hh"
#include "Destination.hh"

int main(void)
{
  Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
  Federation::Starfleet::Captain James("James T. Kirk");
  Federation::Starfleet::Ensign Ensign("Pavel Chekov");
  WarpSystem::QuantumReactor QR;
  WarpSystem::QuantumReactor QR2;
  WarpSystem::Core core(&QR);
  WarpSystem::Core core2(&QR2);
 
  UssKreog.setupCore(&core);
  UssKreog.checkCore();
  UssKreog.promote(&James);
 
  Borg::Ship Cube;
  Cube.setupCore(&core2);
  Cube.checkCore();

  std::cout << Cube.move(3) << std::endl;
  return 0;
}
