##
## Makefile for  in /home/munoz_d/piscine_cpp/cpp_d01/ex01
## 
## Made by David Munoz
## Login   <david.munoz@epitech.eu>
## 
## Started on  Wed Jan  4 12:19:32 2017 David Munoz
## Last update Wed Jan  4 19:04:22 2017 David Munoz
##

NAME	= menger

OBJ	= $(SRC:.c=.o)

SRC	= menger.c	\
	main.c

CC	= gcc

RM 	= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=gnu99

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
