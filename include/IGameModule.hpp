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
#include "IMovedElem.hpp"

class IGameModule {
public:
    virtual ~IGameModule() = default;

    virtual std::vector<IDisplayElem> getGraphElem(void) = 0;
    virtual std::vector<IMovedElem>   giveMoved(void) = 0;
    virtual void getInput(char input) = 0;
    virtual void gameTick(void) = 0;
};

#endif /* !IGAMEMODULE_HPP_ */
