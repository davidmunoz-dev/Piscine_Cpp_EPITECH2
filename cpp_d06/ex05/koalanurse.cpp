//
// sickkoala.cpp for  in /home/munoz_d/piscine_cpp/cpp_d06/ex02
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan  9 12:30:11 2017 David Munoz
// Last update Tue Jan 10 00:41:10 2017 David Munoz
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "sickkoala.h"
#include "koalanurse.h"

//Constructor
KoalaNurse::KoalaNurse(int id)
{
  this->id = id;
}

//Destructor
KoalaNurse::~KoalaNurse()
{
  std::cout << "Nurse " << KoalaNurse::getID() << ": Enfin un peu de repos!" << std::endl;
}

int     KoalaNurse::getID()
{
  return (this->id);
}

void	KoalaNurse::giveDrug(std::string drug, SickKoala *patient)
{
  patient->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string fichier)
{
  std::string	drug;
  std::string	patient = fichier;
  std::fstream file;
  std::size_t rap = fichier.find(".report");
  std::size_t taille = fichier.length();

  if (taille - 7 == rap)
    {
      file.open(fichier.c_str());
      if (file.is_open())
	{
	  file >> drug;
	  patient.replace(rap, 7, "");
	  std::cout << "Nurse " << KoalaNurse::getID() << ": Kreog! Il faut donner un " << drug << " a Mr." << patient << "!" << std::endl;
	  return (drug);
	}
      else
	return ("");
    }
  return ("");
}

void	KoalaNurse::timeCheck()
{
  static bool check = false;
  
  if (check == false)
    {
      std::cout << "Nurse " << KoalaNurse::getID() << ": Je commence le travail!" << std::endl;
      check = true;
    }
  else if (check == true)
    {
      std::cout << "Nurse " << KoalaNurse::getID() << ": Je rentre dans ma foret d'eucalyptus!" << std::endl;
      check = false;
    }
}
