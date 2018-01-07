##
## Makefile for  in /home/munoz_d/piscine_cpp/cpp_d01/ex01
## 
## Made by David Munoz
## Login   <david.munoz@epitech.eu>
## 
## Started on  Wed Jan  4 12:19:32 2017 David Munoz
## Last update Tue Jan 10 09:13:55 2017 David Munoz
##

NAME	= koala

OBJ	= $(SRC:.cpp=.o)

SRC	= koalanurse.cpp	\
	sickkoala.cpp		\
	main.cpp

CC	= g++

RM 	= rm -f

CFLAGS	= -W -Wall -Werror -std=c++03

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
