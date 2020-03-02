##
## EPITECH PROJECT, 2019
## standard makefile
## File description:
## Makefile
##

SRC	=

OBJ	=	$(SRC:.cpp=.o)

HEADER	=	include/

CC	=	@g++

CFLAGS	=	-Wall -Wextra -Werror

CPPFLAGS	=	-ldl -I $(HEADER)

NAME	=	arcade

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo compile $(NAME)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

%.o: %.cpp
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo Clean .o, $(NAME)
	@rm -rf $(OBJ)

fclean: clean
	@echo Clean $(NAME)
	@rm -rf $(NAME)

re: fclean all
