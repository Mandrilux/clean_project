/*
** open.c for  in /home/baptiste/project/clean_project
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 12:37:10 2016
** Last update Wed May 18 12:47:42 2016 
*/

#include "my.h"

int	open_file(char	*name_file)
{
  int	fd;

  if ((fd = open(name_file, O_RDONLY)) == -1)
    {
      perror(name_file);
      return (-1);
    }

  return (1);
}
