/*
** main.c for in /home/baptiste/project/clean_project
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 13:12:43 2016
** Last update Thu May 19 19:24:07 2016 
*/

#include "my.h"

int             main(__attribute__((unused)) int argc, __attribute__((unused))
		     char **argv)
{
  DIR		*rep;
  t_leak	leak;

  if (directory_open(&rep) == -1)
    return (EXIT_FAILURE);
  display_directory(&leak, &rep);
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

int    display_directory(t_leak *leak, DIR **rep)
{
  struct dirent *ent;

  if (*rep != NULL)
    {
      while ((ent = readdir(*rep)) != NULL)
	{
	  if (strlen(ent->d_name) > 2)
	    {
	      if (strcmp(&(ent->d_name[strlen(ent->d_name) - 2]), ".c") == 0)
		open_file(leak, ent->d_name);
	      if (strncmp("vgcore", ent->d_name, 6) == 0)
		{
		  printf("[+] remove %s successful\n", ent->d_name);
		  remove(ent->d_name);
		}
	    }
	}
      closedir(*rep);
    }
  return (1);
}
