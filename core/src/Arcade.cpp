/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** Arcade
*/

#include "Arcade.hpp"

Arcade::Arcade(std::string &starting_graph):
	_curr_disp(new DLLoader<IDisplayModule>(starting_graph)),
	_curr_game(nullptr)
{
}

Arcade::~Arcade()
{
	if (this->_curr_disp)
		delete this->_curr_disp;
	if (this->_curr_game)
		delete this->_curr_game;
}

void Arcade::giveInput(char input)
{
	this->_curr_game->getInstance()->getInput(input);
}

void Arcade::startLoop(void)
{
	std::cout << "loop" << std::endl;
}

void Arcade::loadGame(std::string &game)
{
	if (this->_curr_game)
		delete this->_curr_game;
	this->_curr_game = new DLLoader<IGameModule>(game);
}

void Arcade::loadMenu(void)
{
	std::cout << "Load Menu" << std::endl;
}

void Arcade::askInput(void)
{
	this->_curr_disp->getInstance()->getInput();
}

void Arcade::runTick(void)
{
	this->_curr_game->getInstance()->gameTick();
}

void Arcade::actuElem(void)
{
	this->_listElem = this->_curr_game->getInstance()->getDisplay();
}

void Arcade::loadElem(void)
{
	this->_curr_disp->getInstance()->loadElemToDisplay(this->_listElem);
}

void Arcade::actuDisplay(void)
{
	this->_curr_disp->getInstance()->display();
}
