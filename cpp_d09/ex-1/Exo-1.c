/*
** Exo-1.c for  in /home/munoz_d/piscine_cpp/cpp_d09/ex-1
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan 12 10:45:03 2017 David Munoz
** Last update Thu Jan 12 15:09:19 2017 David Munoz
*/

#include "Exo-1.h"
#include <stdio.h>
#include <stdlib.h>

static void KoalaInitializer(t_koala* this, char* _name, char _isALegend)
{
  CthulhuInitializer(&this->m_parent);
  this->m_parent.m_name = _name;
  if (_isALegend)
    this->m_parent.m_power = 42;
  else
    this->m_parent.m_power = 0;
  this->m_isALegend = _isALegend;
  printf("Building %s\n", this->m_parent.m_name);
}

static void CthulhuInitializer(t_cthulhu* this)
{
  printf("----\n");
  this->m_name = malloc(sizeof(char) * 100);
  this->m_name = "Cthulhu";
  this->m_power = 42;
  printf("Building %s\n", this->m_name);
}

void		PrintPower(t_cthulhu *this)
{
  if (this)
    printf("Power => %d\n", this->m_power);
}

void		Attack(t_cthulhu* this)
{
  if (this->m_power >= 42)
    {
      this->m_power -= 42;
      printf("%s attacks and destroys the city\n", this->m_name);
    }
  else
    printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void		Sleeping(t_cthulhu* this)
{
  this->m_power += 42000;
  printf("%s sleeps\n", this->m_name);
}

t_cthulhu*	NewCthulhu()
{
  t_cthulhu*	cthulhu;

  cthulhu = malloc(sizeof(cthulhu));
  if (cthulhu)
    CthulhuInitializer(cthulhu);
  return (cthulhu);
}

t_koala*	NewKoala(char* name, char _isALegend)
{
  t_koala	*koala;
  koala = malloc(sizeof(t_koala));
  if (koala)
    KoalaInitializer(koala, name, _isALegend);
  return (koala);
}

void Eat(t_koala* this)
{
  this->m_parent.m_power += 42;
  printf("%s eats\n", this->m_parent.m_name);
}
