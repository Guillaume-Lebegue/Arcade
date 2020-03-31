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

class IDisplayModule {
	public:
		virtual ~IDisplayModule() = default;

		virtual int loadElemToDisplay(std::vector<IDisplayElem> &elements) = 0;
		virtual int getInput(void) = 0;
		virtual int display(void) = 0;
};

#endif /* !IGRAPHICALLIB_HPP_ */
