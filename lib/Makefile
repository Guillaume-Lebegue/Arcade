##
## EPITECH PROJECT, 2020
## OOP_arcade_2019
## File description:
## lib makefile 
##

SRCNCURSES	=	\
SRCSFML		=	\

OBJNCURSES	=	$(SRCNCURSES:.cpp=.o)
OBJSFML		=	$(SRCSFML:.cpp=.o)

CC		=	@g++

CFLAGS		=	-Wall -Werror -Wextra

NAMENCURSES	=	lib_arcade_ncurses.so
NAMESFML	=	lib_arcade_sfml.so

.PHONY: clean fclean re lib_arcade_ncurses.so lib_arcade_sfml.so

all: $(NAMENCURSES) $(NAMESFML)

$(NAMENCURSES): $(OBJNCURSES)
	@echo Compiling \'$(NAMENCURSES)\'
	$(CC) -o $(NAMENCURSES) $(OBJNCURSES)
	@echo \'$(NAMENCURSES)\' compiled successfully

$(NAMESFML): $(OBJSFML)
	@echo Compiling \'$(NAMESFML)\'
	$(CC) -o $(NAMESFML) $(OBJSFML)
	@echo \'$(NAMESFML)\' compiled successfully

clean:
	@rm -rf $(OBJNCURSES)
	@echo Cleaned .o for \'$(NAMENCURSES)\'
	@rm -rf $(OBJSFML)
	@echo Cleaned .o for \'$(NAMESFML)\'

fclean:	clean
	@rm -rf $(NAMENCURSES)
	@echo Cleaned \'$(NAMENCURSES)\'
	@rm -rf $(NAMESFML)
	@echo Cleaned \'$(NAMESFML)\'

re: fclean all
