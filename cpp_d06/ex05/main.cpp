//
// main.cpp for  in /home/munoz_d/piscine_cpp/cpp_d06/ex03
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan  9 16:49:03 2017 David Munoz
// Last update Tue Jan 10 00:47:28 2017 David Munoz
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <string>
#include "sickkoala.h"
#include "koalanurse.h"

void    koko()
{
  SickKoala	myKoala("Cooki");
  KoalaNurse	myNurse(21);
  std::string	drug;

  std::cout << "my nurse ID: " << myNurse.getID() << std::endl;
  drug = myNurse.readReport("file.report");
  myNurse.giveDrug(drug, &myKoala);
  myNurse.timeCheck();
  myNurse.timeCheck();
  myNurse.timeCheck();
}

int     main()
{
  koko();
  return (0);
}
