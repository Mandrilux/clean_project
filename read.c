/*
** open.c for in /home/baptiste/project/clean_project
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 12:37:10 2016
** Last update Wed May 18 13:42:17 2016 
*/

#include "my.h"

int	open_file(char	*name_file)
{
  int	fd;
  char	*str;
  char	**data = NULL;
  char	*str_tmp0,  *str_tmp1, *str_check;

  if ((fd = open(name_file, O_RDONLY)) == -1)
    {
      perror(name_file);
      return (-1);
    }
  while ((str = get_next_line(fd)) != NULL)
    {
      data = alloc(data, str);
      free(str);
    }
  close(fd);
  if (data != NULL && count_tab(data) > 10)
    {
      str_tmp0 = rostring(data[0]);
      str_tmp1 = rostring(data[8]);
      str_check = rostring(data[1]);
      if (strcmp("/*", str_tmp0) == 0 && strcmp("*/", str_tmp1) == 0)
	{
	  if (strstr(str_check, "1;2802;0c") != NULL || strncmp(str_check,"**", 2) != 0)
	    {
	      printf("Clean file [%s]\n", name_file);
	      free(data[1]);
	      data[1] = clean_line(str_check);
	      write_clean(data, name_file);
	    }
	}
      free(str_tmp0);
      free(str_tmp1);
      free(str_check);
    }
  if (data != NULL)
    free_tab(data);
  return (1);
}

int	write_clean(char **data, char *name)
{
  int	fd;
  int	i = -1;

  if ((fd= open(name, O_TRUNC | O_WRONLY)) == -1)
    {
      perror(name);
      return (-1);
    }
  while (data[++i] != NULL)
    {
      write(fd, data[i], strlen(data[i]));
      write(fd, "\n", strlen("\n"));
    }
  close(fd);
  return (1);
}
