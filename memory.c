/*
** memory.c for  in /home/baptiste/project/clean_project_epitech
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Thu May 19 19:29:41 2016
** Last update Fri May 20 09:27:47 2016 
*/

#include "my.h"

void    **alloc_leak(void **memory, void *p)
{
  int   i;
  void  **tmp;

  i = -1;
  if (memory == NULL)
    {
      if ((tmp = malloc(sizeof(char *) * 3)) == NULL)
	return (NULL);
      tmp[0] = p;
      tmp[1] = memory;
      tmp[1] = NULL;
    }
  else
    {
      if ((tmp = malloc(sizeof(char *) *
			(count_memory(memory) + 3))) == NULL)
	return (NULL);
      while (memory[++i] != NULL)
	tmp[i] = memory[i];
      tmp[i] = p;
      tmp[i + 1] = memory;
      tmp[i + 2] = NULL;
    }
  return (tmp);
}

int     count_memory(void **tab)
{
  int   i = -1;
  while (tab[++i] != NULL);
  return (i);
}

int	free_memory(void **tab)
{
  int	i = -1;

  while(tab[++i] != NULL)
    free(tab[i]);
  return(1);
}

int     free_tab(char **tab)
{
  int   i;

  i = -1;
  while (tab[++i] != NULL)
    free(tab[i]);
  free(tab);
  return (1);
}
