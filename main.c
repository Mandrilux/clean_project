/*
1;2802;0c** main.c for  in /home/baptiste/project/generator_h
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Mon May 16 10:48:51 2016
** Last update Wed May 18 12:43:41 2016 
*/

#include "my.h"

int		main(int ac, char **av)
{
  DIR		*rep;

  if (directory_open(&rep) == -1)
    return (EXIT_FAILURE);
  display_directory(&rep);
  /* write_def_bottom(core); */
  /* printf("[+] Generation %s successful\n", core->name_h); */
  /* free_all(core); */
  return (EXIT_SUCCESS);
}

int		directory_open(DIR **rep)
{
  *rep = opendir(".");
  if (*rep == NULL)
    {
      perror("Erreur lors de louverture du dossier courant\n");
      return (-1);
    }
  else
    return (1);
}

int    display_directory(DIR **rep)
{
  struct dirent *ent;

  if (*rep != NULL)
    {
      while ((ent = readdir(*rep)) != NULL)
	{
	  if (strlen(ent->d_name) > 2)
	    {
	      if (strcmp(&(ent->d_name[strlen(ent->d_name) - 2]), ".c") == 0)
		printf("[%s]\n", ent->d_name);
	    }
	}
      closedir(*rep);
    }
  return (1);
}
