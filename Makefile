##
## Makefile for  in /home/baptiste/rendu/CPE_colle_semaine3
## 
## Made by 
## Login   <baptiste@epitech.net>
## 
## Started on  Wed May 11 17:39:05 2016 
## Last update Wed May 18 12:55:23 2016 
##


NAME	=	cleaner

SRC	=	main.c \
		read.c \
		get_line.c \
		str.c \
		check.c
INC_DIR	=	include

OBJ	=	$(SRC:.c=.o)

CC	=	/usr/bin/gcc

CFLAGS	=	-W -Wall -Wextra -ansi -pedantic
CFLAGS  +=      -I$(INC_DIR)

RM	=	rm -f
ECHO	=	echo -e

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)
		@$(ECHO) '\033[0;32m> clean Compiled\033[0m'

clean	:
		-@$(RM) $(OBJ)
		-@$(RM) *~
		-@$(RM) \#*#
		@$(ECHO) '\033[0;31m> Directory cleaned\033[0m'


fclean	:	clean
		-@$(RM) $(NAME)
		@$(ECHO) '\033[0;31m> Remove executable\033[0m'

re	:	fclean all

.PHONY	:	all clean fclean re
