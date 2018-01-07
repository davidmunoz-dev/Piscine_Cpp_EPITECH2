##
## Makefile for  in /home/munoz_d/piscine_cpp/cpp_d01/ex01
## 
## Made by David Munoz
## Login   <david.munoz@epitech.eu>
## 
## Started on  Wed Jan  4 12:19:32 2017 David Munoz
## Last update Mon Jan  9 08:40:22 2017 David Munoz
##

NAME	= my_convert_temp

OBJ	= $(SRC:.cpp=.o)

SRC	= main.cpp

CC	= g++

RM 	= rm -f

CFLAGS	= -Wall -Wextra -Werror

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
