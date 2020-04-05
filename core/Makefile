##
## EPITECH PROJECT, 2020
## core makefile
## File description:
## Makefile
##

SRC	=	src/Error.cpp		\
		src/Arcade.cpp		\
		src/DLLoader.cpp	\
		src/MainArcade.cpp	\

OBJ	=	$(SRC:.cpp=.o)

HEADER	=	include/

MHEADER	=	../include/

CC	=	@g++

CFLAGS	=	-Wall -Wextra -Werror -I $(HEADER) -I $(MHEADER)

CPPFLAGS=	-ldl

NAME	=	arcade

.PHONY: clean fclean re arcade

all: $(NAME)

$(NAME): $(OBJ)
	@echo Compiling \'$(NAME)\'
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS)
	@mv $(NAME) ..

%.o: %.cpp
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo Clean .o, $(NAME)
	@rm -rf $(OBJ)

fclean: clean
	@echo Clean $(NAME)
	@rm -rf ../$(NAME)

re: fclean all
