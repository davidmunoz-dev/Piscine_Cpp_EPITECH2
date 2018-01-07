/*
** Skat.h for  in /home/munoz_d/piscine_cpp/cpp_d07a
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Tue Jan 10 18:27:20 2017 David Munoz
** Last update Wed Jan 11 09:15:42 2017 David Munoz
*/

#ifndef SKAT_H_
#define SKAT_H_

# include <string>
# include <iostream>

class Skat
{
 public:
  Skat(std::string const& name, int stimPaks);
  Skat(std::string const& name);
  Skat(int stimPaks);
  Skat();
  ~Skat();

 public:
  int&	stimPaks();
  const std::string& name();

public:
  void shareStimPaks(int number, int &stock);
  void addStimPaks(unsigned int number);
  void useStimPaks();

 public:
  void status();

private:
  std::string _name;
  int _stimPaks;
};

#endif /* SKAT_H_ */
