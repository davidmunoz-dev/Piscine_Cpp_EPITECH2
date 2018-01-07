/*
** simple_list.c for  in /home/munoz_d/piscine_cpp/cpp_d02a
** 
** Made by David Munoz
** Login   <david.munoz@epitech.eu>
** 
** Started on  Thu Jan  5 15:08:48 2017 David Munoz
** Last update Thu Jan  5 19:07:03 2017 David Munoz
*/

#include "simple_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int	list_get_size(t_list list)
{
  int	i;

  i = 0;
  if (list == NULL)
    return (0);
  while (list)
    {
      i++;
      list = list->next;
    }
  return (i);
}

t_bool		list_is_empty(t_list list)
{
  if (list == NULL)
    return (TRUE);
  return (FALSE);
}

void		list_dump(t_list list)
{
  while (list)
    {
      printf("%f\n", list->value);
      list = list->next;
    }
}

t_bool		list_add_elem_at_front(t_list *front_ptr, double elem)
{
  t_node	*node;

  if ((node = malloc(sizeof(*node))) == NULL)
    return (FALSE);
  node->value = elem;
  node->next = *front_ptr;
  *front_ptr = node;
  return (TRUE);
}

t_bool		list_add_elem_at_back(t_list *front_ptr, double elem)
{
  t_node	*node;
  t_list	list;

  if ((node = malloc(sizeof(*node))) == NULL)
    return (FALSE);
  node->value = elem;
  node->next = NULL;
  if (*front_ptr == NULL)
    *front_ptr = node;
  else
    {
      list = *front_ptr;
      while (list->next != NULL)
	list = list->next;
      list->next = node;
    }
  return (TRUE);
}

t_bool		list_add_elem_at_position(t_list *front_ptr, double elem, unsigned int position)
{
  t_node	*node;
  t_list	list;

  if (position == 0)
    return (list_add_elem_at_front(front_ptr, elem));
  if (*front_ptr == NULL)
    return (FALSE);
  list = *front_ptr;
  while (--position)
    {
      list = list->next;
      if (list == NULL)
	return (FALSE);
    }
  if ((node = malloc(sizeof(*node))) == NULL)
    return (FALSE);
  node->value = elem;
  node->next = NULL;
  if (node == NULL)
    return (FALSE);
  node->next = list->next;
  list->next = node;
  return (TRUE);
}

t_bool		list_del_elem_at_front(t_list *front_ptr)
{
  t_list	list;

  list = *front_ptr;
  if (list == NULL)
    return (FALSE);
  *front_ptr = list->next;
  free(list);
  return (TRUE);
}

t_bool		list_del_elem_at_back(t_list *front_ptr)
{
  t_list	list;
  t_list	prev;

  list = *front_ptr;
  prev = NULL;
  if (list == NULL)
    return (FALSE);
  while (list->next)
    {
      prev = list;
      list = list->next;
    }
  if (prev)
    prev->next = NULL;
  else
    *front_ptr = NULL;
  free(list);
  return (TRUE);
}

t_bool		list_del_elem_at_position(t_list *front_ptr, unsigned int position)
{
  t_list	list;
  t_list	prev;

  if (*front_ptr == NULL)
    return (FALSE);
  if (position == 0)
    return (list_del_elem_at_front(front_ptr));
  prev = *front_ptr;
  list = prev->next;
  if (position == list_get_size(*front_ptr))
    return (list_del_elem_at_back(front_ptr));
  while (--position && list != NULL)
    {
      if (list == NULL)
	return (FALSE);
      prev = list;
      list = list->next;
    }
  if (list != NULL)
    prev->next = list->next;
  free(list);
  return (TRUE);
}

double		list_get_elem_at_front(t_list list)
{
  if (list == NULL)
    return (0);
  return (list->value);
}

double		list_get_elem_at_back(t_list list)
{
  if (list == NULL)
    return (0);
  while (list->next)
    list = list->next;
  return (list->value);
}

double		list_get_elem_at_position(t_list list, unsigned int position)
{
  if (list == NULL)
    return (0);
  if (position == 0)
    list_get_elem_at_front(list);
  if (position == list_get_size(list))
    return (list_get_elem_at_back(list));
  while (position)
    {
      list = list->next;
      if (list == NULL)
	return (0);
      position--;
    }
  return (list->value);
}

t_node		*list_get_first_node_with_value(t_list list, double value)
{
  while (list)
    {
      if (list->value == value)
	return (list);
      list = list->next;
    }
  return (NULL);
}
