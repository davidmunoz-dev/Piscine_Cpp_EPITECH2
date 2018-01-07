/*
** white_rabbit.c for david in /home/munoz_d
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Jan  4 09:00:23 2017 David Munoz
** Last update Thu Jan  5 08:03:29 2017 David Munoz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	follow_the_white_rabbit(void)
{
  int	i;
  int	k;

  i = k = 0;
  i = (rand() % 37) +1;
  while (i != 1 && i != 37 && k != 421 && k != 397)
    {
      i = (rand() % 37) +1;
      if (i >= 25 && ((i * 3) == 78 || (i * 3) == 146 || i % 8 == 0))
	printf("derriere\n");
      else if ((i >= 4 && i <= 6) || i == 28 || (i >= 17 && i <= 21))
	printf("gauche\n");
      else if (i == 13 || (i >= 34 && i <= 36))
	printf("droite\n");
      else if (i == 10 || i == 15 || i == 23)
	printf("devant\n");
      k = k + i;
    }
  printf("LAPIN !!!\n");
  return (k);
}
