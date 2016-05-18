/*
** my.h for  in /home/baptiste/project/clean_project
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 12:49:26 2016
** Last update Wed May 18 12:54:19 2016 
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

char		*strdup(const char *s);

		/* check.c */

int		 count_tab(char **tab);

		/* read.c */

int		 open_file(char *name_file);

		/* str.c */

char		 **alloc(char **re_write, char *name);
char		 *rostring(char *str);
char		 *init_str_2(char *str);

		/* get_line.c */

int		 my_memset_len(char *s, char c, int size, int flag);

		/* main.c */

int		 main(int ac, char **av);
int		 directory_open(DIR **rep);
int		 display_directory(DIR **rep);

#endif /* MY_H_ */