/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** Menu
*/

#ifndef MENU_HPP_
#define MENU_HPP_

#include <string>
#include <vector>
#include "IMovedElem.hpp"
#include "IDisplayElem.hpp"
#include "CoreDisplayElem.hpp"
#include "CoreMovedElem.hpp"

typedef enum {
	DISPLAY,
	GAME,
} lib_type_t;

typedef struct {
	std::string path;
	std::string name;
	lib_type_t type;
} lib_t;

class Menu {
	public:
		Menu();
		~Menu() = default;

		lib_t *getInput(char input);
		std::vector<IDisplayElem *> *getGraphElem(void);
		std::vector<IMovedElem *> *giveMoved(void);

	protected:
	private:
		std::vector<lib_t> _gameLib;
		std::vector<lib_t> _displayLib;
		std::vector<IMovedElem *> _moved;
		unsigned int _selectPos;
};

#endif /* !MENU_HPP_ */
