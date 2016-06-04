/*
** check.c for  in /home/baptiste/project/clean_project
**
** Made by
q** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 12:54:55 2016
** Last update Sat Jun  4 15:31:28 2016 
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

int	check_mallock(char **tab, char *file)
{
  int	i;

  i = -1;
  while (tab[++i] != NULL)
    {
      if (strstr(tab[i],"malloc") != NULL)
	{
	  if (strstr(tab[i], "NULL") == NULL)
	    printf("[Malloc non verifier] dans le fichier %s ligne [%d]\n", file, i + 1);
	}
    }
  return (1);
}
