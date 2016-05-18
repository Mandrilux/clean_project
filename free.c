/*
** check.c for  in /home/baptiste/rendu/marvin_heraud_b
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Fri May 13 22:16:55 2016
** Last update Wed May 18 13:33:46 2016 
*/

#include "my.h"

int	free_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i] != NULL)
    free(tab[i]);
  free(tab);
  return (1);
}
