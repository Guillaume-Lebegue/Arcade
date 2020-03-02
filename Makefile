##
## EPITECH PROJECT, 2019
## general makefile
## File description:
## Makefile
##

NAME	=	arcade

.PHONY: clean fclean re arcade

all:	$(NAME)

$(NAME):
	make -C core

clean:
	make clean -C core

fclean:	clean
	make fclean -C core

re:	fclean all
