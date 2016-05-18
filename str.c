/*
** str.c for  in /home/baptiste/project/generator_h
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Tue May 17 13:22:04 2016
** Last update Wed May 18 13:18:24 2016 
*/

#include "my.h"

char	**alloc(char **re_write, char *name)
{
  int   i;
  char  **tmp;

  i = -1;
  if (re_write == NULL)
    {
      if ((tmp = malloc(sizeof(char *) * 2)) == NULL)
	return (NULL);
      tmp[0] = strdup(name);
      tmp[1] = NULL;
    }
  else
    {
      if ((tmp = malloc(sizeof(char *) *
			(count_tab(re_write) + 2))) == NULL)
	return (NULL);
      while (re_write[++i] != NULL)
	tmp[i] = re_write[i];
      tmp[i] = strdup(name);
      tmp[i + 1] = NULL;
    }
  return (tmp);
}

char    *rostring(char *str)
{
  int   i;
  int   j;
  char  *str_2;

  str_2 = init_str_2(str);
  i = 0;
  j = 0;
  while ((str[i] == ' ' || str[i] == '\t') && str[i++] != '\0');
  while (str[i] != '\0')
    {
      if ((str[i] == '\t' || str[i] == ' ')
	  && (str[i + 1] != '\t' && str[i + 1] != ' ')
	  && str[i + 1] != '\0')
	str_2[j++] = ' ';
      else if (str[i] != ' ' && str[i] != '\t')
	str_2[j++] = str[i];
      i++;
    }
  str_2[j] = '\0';
  return (str_2);
}

char    *init_str_2(char *str)
{
  char  *str_2;

  if ((str_2 = malloc(sizeof(char) * (strlen(str) + 1))) == NULL)
    return (NULL);
  memset(str_2, 0, strlen(str) + 1);
  return (str_2);
}

int	clean_line(char	*line)
{
  int	i = -1;
  return (1);
}
