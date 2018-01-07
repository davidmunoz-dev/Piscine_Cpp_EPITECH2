/*
** Exo-1.h for  in /home/munoz_d/piscine_cpp/cpp_d09/ex-1
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan 12 10:44:59 2017 David Munoz
** Last update Thu Jan 12 12:04:33 2017 David Munoz
*/

#ifndef _EXO1_H_
#define _EXO1_H_

typedef	struct	s_cthulhu
{
  int		m_power;
  char		*m_name;
}		t_cthulhu;

typedef struct	s_koala
{
  t_cthulhu	m_parent;
  char		m_isALegend;
}		t_koala;

static void	CthulhuInitializer(t_cthulhu* this);
t_cthulhu	*NewCthulhu();
void		PrintPower(t_cthulhu* this);
void		Attack(t_cthulhu* this);
void		Sleeping(t_cthulhu* this);
t_koala*	NewKoala(char* name, char _isALegend);
void		Eat(t_koala* this);
void		PrintPower(t_cthulhu *this);

#endif /* _EXO1_H_ */
