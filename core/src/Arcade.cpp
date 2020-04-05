/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** Arcade
*/

#include "Arcade.hpp"

Arcade::Arcade(std::string &starting_graph) :
_curr_disp(new DLLoader<IDisplayModule>(starting_graph, this)), _curr_game(nullptr)
{
    this->loadMenu();
    this->startLoop();
}

Arcade::~Arcade()
{
    if (this->_curr_disp) delete (this->_curr_disp);
    if (this->_curr_game) delete (this->_curr_game);
}

void Arcade::giveInput(char input)
{
    if (this->_curr_game)
        this->_curr_game->getInstance()->getInput(input);
    else
        this->_arcadeMenu.getInput(input);
}

void Arcade::startLoop(void)
{
    this->askInput();
    this->runTick();
    this->actuElem();
    this->actuMoved();
    this->actuDisplay();
}

void Arcade::loadGame(std::string &game)
{
    if (this->_curr_game)  delete   (this->_curr_game);
    this->_curr_game = new DLLoader<IGameModule>(game, this);
}

void Arcade::loadMenu(void)
{
    std::vector<IDisplayElem *> *tmp = this->_arcadeMenu.getGraphElem();

    this->_dispElem.insert(this->_dispElem.begin(), tmp->begin(), tmp->end());
}

void Arcade::loadDisplay(std::string &display)
{
    (void) display;
    std::cout << "loadDisplay" << std::endl;
}

void Arcade::askInput(void)
{ this->_curr_disp->getInstance()->getInput(); }

void Arcade::runTick(void)
{ this->_curr_game->getInstance()->gameTick(); }

void Arcade::actuElem(void)
{
    std::vector<IMovedElem *> *tmp;

    if (this->_curr_game) {
        tmp = this->_curr_game->getInstance()->giveMoved();
        this->_movedElem.insert(this->_movedElem.begin(), tmp->begin(), tmp->end());
    } else {
        tmp = this->_arcadeMenu.giveMoved();
        this->_movedElem.insert(this->_movedElem.begin(), tmp->begin(), tmp->end());
    }
}

void Arcade::actuMoved(void)
{ this->_curr_disp->getInstance()->getMoved(this->_movedElem); }

void Arcade::loadElem(void)
{ this->_curr_disp->getInstance()->loadElemToDisplay(this->_dispElem); }

void Arcade::actuDisplay(void)
{ this->_curr_disp->getInstance()->display(); }
