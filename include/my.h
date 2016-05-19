/*
** my.h for  in /home/baptiste/project/clean_project
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 12:49:26 2016
** Last update Thu May 19 19:22:08 2016 
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include "get_next_line.h"

typedef	struct	s_leak
{
	void	**memory;
}               t_leak;

char		*strdup(const char *s);

		/* free.c */

int		 free_tab(char **tab);

		/* check.c */

int		 count_tab(char **tab);

		/* read.c */

int		 open_file(t_leak *leak, char *name_file);
int		 write_clean(char **data, char *name);

		/* memory.c */

void		 **alloc_leak(void **memory, void *p);
int		 count_memory(void **tab);

		/* str.c */

char		 **alloc(char **re_write, char *name);
char		 *rostring(char *str);
char		 *init_str_2(char *str);
char		 *clean_line(char *line);

		/* get_line.c */

int		 my_memset_len(char *s, char c, int size, int flag);

		/* main.c */

int		 directory_open(DIR **rep);
int		 display_directory(t_leak *leak, DIR **rep);

#endif /* MY_H_ */
