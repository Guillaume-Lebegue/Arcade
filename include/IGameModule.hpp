/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** IGameModule
*/

#ifndef IGAMEMODULE_HPP_
#define IGAMEMODULE_HPP_

#include <vector>
#include "IDisplayElem.hpp"

class IGameModule {
	public:
		virtual ~IGameModule() = default;

		virtual std::vector<IDisplayElem> getDisplay(void) = 0;
		virtual int getInput(char input) = 0;
		virtual int gameTick(void) = 0;
};

#endif /* !IGAMEMODULE_HPP_ */
