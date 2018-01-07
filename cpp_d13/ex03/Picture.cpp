//
// Picture.cpp for  in /home/munoz_d/piscine_cpp/cpp_d13/ex00
// 
// Made by David Munoz
// Login   <david.munoz@epitech.eu>
// 
// Started on  Mon Jan 16 09:23:44 2017 David Munoz
// Last update Mon Jan 16 11:42:39 2017 David Munoz
//

#include	"Picture.h"
#include	<iostream>
#include	<iomanip>
#include	<fstream>
#include	<sstream>

Picture::Picture() : data("")
{
}

Picture::Picture(const std::string &file)
{
  getPictureFromFile(file);
}

Picture::Picture(const Picture &pict)
{
  data = pict.data;
}

Picture::~Picture()
{
}

bool	Picture::getPictureFromFile(const std::string &file)
{
  std::ifstream myReadFile(file.data());

  if (myReadFile.is_open())
    {
      std::stringstream	buffer;

      buffer << myReadFile.rdbuf();
      data = buffer.str();
      myReadFile.close();
      return (true);
    }
  data = "ERROR";
  return (false);
}

Picture &Picture::operator=(const Picture &pict)
{
  data = pict.data;
  return (*this);
}
