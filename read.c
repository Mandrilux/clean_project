/*
1;2802;0c1;2802;0c** open.c for  in /home/baptiste/project/clean_project
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 12:37:10 2016
** Last update Wed May 18 13:15:58 2016 
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
    data = alloc(data, str);
  close(fd);
  if (data != NULL && count_tab(data) > 10)
    {
      str_tmp0 = rostring(data[0]);
      str_tmp1 = rostring(data[8]);
      str_check = rostring(data[1]);
      if (strcmp("/*", str_tmp0) == 0 && strcmp("*/", str_tmp1) == 0)
	{
	  if (strstr(str_check, "1;2802;0c") != NULL)
	    printf("Header fichier pas clean [%s]\n", name_file);
	}
      free(str_tmp0);
      free(str_tmp1);
      free(str_check);
    }
  return (1);
}
