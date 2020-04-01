/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** IGraphicalLib
*/

#ifndef IDISPLAYMOCULE_HPP_
#define IDISPLAYMODULE_HPP_

#include <vector>
#include "IDisplayElem.hpp"
#include "IMovedElem.hpp"

class IDisplayModule {
	public:
		virtual ~IDisplayModule() = default;

		virtual void loadElemToDisplay(std::vector<IDisplayElem> &elements) = 0;
		virtual void getInput(void) = 0;
		virtual void display(void) = 0;
		virtual void getMoved(std::vector<IMovedElem> &elements) = 0
};

#endif /* !IGRAPHICALLIB_HPP_ */
