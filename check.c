/*
** check.c for  in /home/baptiste/project/clean_project
**
** Made by
q** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 12:54:55 2016
** Last update Sun May 29 18:08:12 2016 
*/

#include "my.h"

int     count_tab(char **tab)
{
  int   i = -1;

  if (tab == NULL)
    return (0);
  while (tab[++i] != NULL);
  return (i);
}
