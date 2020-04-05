/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** CoreMovedElem
*/

#include "CoreMovedElem.hpp"

CoreMovedElem::CoreMovedElem(int id, position_t pos, bool visible):
_id(id), _position(pos), _visible(visible)
{}

int CoreMovedElem::getId(void) const
{return this->_id; }

position_t CoreMovedElem::getPosition(void) const
{return this->_position; }

bool CoreMovedElem::getVisible(void) const
{return this->_visible; }
