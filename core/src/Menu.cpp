/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** Menu
*/

#include <dirent.h>
#include <experimental/filesystem>
#include <fstream>
#include "Menu.hpp"
#include "CoreDisplayElem.hpp"
#include "CoreMovedElem.hpp"

namespace fs = std::experimental::filesystem;

static std::vector<lib_t> getLibs(std::string folderPath, lib_type_t type)
{
	std::vector<lib_t> libList;

	for (auto &stream : fs::directory_iterator(folderPath)) {
		if (stream.path().extension() == ".so") {
			libList.insert(libList.begin(), {stream.path().string(), stream.path().filename(), type});
		}
	}
	return libList;
}

static std::vector<IDisplayElem *> strToDisp(int &lastId, std::string str, position_t startPos)
{
	std::vector<IDisplayElem *> ElemList;

	for (auto c = str.cbegin(); c != str.cend(); c++) {
		ElemList.insert(ElemList.begin(), new CoreDisplayElem(--lastId, true, startPos, "", *c));
		startPos.x++;
	}
	return ElemList;
}

Menu::Menu(): _gameLib(getLibs("./lib", DISPLAY)), _displayLib(getLibs("./games", GAME)), _selectPos(0)
{}

std::vector<IDisplayElem *> *Menu::getGraphElem(void)
{
	std::vector<IDisplayElem *> *ElemList = new std::vector<IDisplayElem *>();
	std::vector<IDisplayElem *> tmp;
	int id = -1;
	position_t position = {1, 0};

	ElemList->insert(ElemList->begin(), new CoreDisplayElem(id, true, {0, this->_selectPos}, "", '>'));
	for (auto lib = this->_gameLib.cbegin(); lib != this->_gameLib.cend(); lib++) {
		tmp = strToDisp(id, lib->name, position);
		ElemList->insert(ElemList->end(), tmp.begin(), tmp.end());
		position.y++;
	}
	position = {15, 0};
	for (auto lib = this->_displayLib.cbegin(); lib != this->_displayLib.cend(); lib++) {
		tmp = strToDisp(id, lib->name, position);
		ElemList->insert(ElemList->end(), tmp.begin(), tmp.end());
		position.y++;
	}
	return ElemList;
}

lib_t *Menu::getInput(char input)
{
	if (input == 'k')
		return &this->_gameLib[this->_selectPos];
	if (input == 'z' && this->_selectPos != 0) {
		this->_selectPos--;
		this->_moved.insert(this->_moved.begin(), new CoreMovedElem(-1, {0, this->_selectPos}, true));
	}
	if (input == 's' && this->_selectPos != this->_gameLib.size() - 1) {
		this->_selectPos++;
		this->_moved.insert(this->_moved.begin(), new CoreMovedElem(-1, {0, this->_selectPos}, true));
	}
	return NULL;
}

std::vector<IMovedElem *> *Menu::giveMoved(void)
{
	std::vector<IMovedElem *> *cpy = &this->_moved;
	this->_moved.clear();
	return cpy;
}
