/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** CoreDisplayElem
*/

#include "CoreDisplayElem.hpp"

CoreDisplayElem::CoreDisplayElem(int id, bool visibility, position_t pos, std::string filePath, char charDisp):
_id(id), _visibility(visibility), _position(pos), _filePath(filePath), _charDisp(charDisp)
{}

int CoreDisplayElem::getId(void) const
{return this->_id; }

bool CoreDisplayElem::getVisible(void) const
{return this->_visibility; }

position_t CoreDisplayElem::getPosition(void) const
{return this->_position; }

std::string CoreDisplayElem::getFilePath(void) const
{return this->_filePath; }

char CoreDisplayElem::getCharDisp(void) const
{return this->_charDisp; }

int CoreDisplayElem::chgVisible(bool visible)
{
	this->_visibility = visible;
	return 0;
}

int CoreDisplayElem::chgPosition(position_t &newPos)
{
	this->_position = newPos;
	return 0;
}
