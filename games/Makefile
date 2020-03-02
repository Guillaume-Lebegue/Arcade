##
## EPITECH PROJECT, 2020
## OOP_arcade_2019
## File description:
## games makefile 
##

SRCPACMAN	=	\
SRCNIBBLER	=	\

OBJPACMAN	=	$(SRCPACMAN:.cpp=.o)
OBJNIBBLER	=	$(SRCNIBBLER:.cpp=.o)

CC		=	@g++

CFLAGS		=	-Wall -Werror -Wextra

NAMEPACMAN	=	lib_arcade_pacman.so
NAMENIBBLER	=	lib_arcade_nibbler.so

.PHONY: clean fclean re lib_arcade_pacman.so lib_arcade_nibbler.so

all: $(NAMEPACMAN) $(NAMENIBBLER)

$(NAMEPACMAN): $(OBJPACMAN)
	@echo Compiling \'$(NAMEPACMAN)\'
	$(CC) -o $(NAMEPACMAN) $(OBJPACMAN)
	@echo \'$(NAMEPACMAN)\' compiled successfully

$(NAMENIBBLER): $(OBJNIBBLER)
	@echo Compiling \'$(NAMENIBBLER)\'
	$(CC) -o $(NAMENIBBLER) $(OBJNIBBLER)
	@echo \'$(NAMENIBBLER)\' compiled successfully

clean:
	@rm -rf $(OBJPACMAN)
	@echo Cleaned .o for \'$(NAMEPACMAN)\'
	@rm -rf $(OBJNIBBLER)
	@echo Cleaned .o for \'$(NAMENIBBLER)\'

fclean:	clean
	@rm -rf $(NAMEPACMAN)
	@echo Cleaned \'$(NAMEPACMAN)\'
	@rm -rf $(NAMENIBBLER)
	@echo Cleaned \'$(NAMENIBBLER)\'

re: fclean all
