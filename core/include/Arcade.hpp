/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** Arcade
*/

#ifndef ARCADE_HPP_
#define ARCADE_HPP_

#include <iostream>
#include <string>
#include <vector>
#include "DLLoader.hpp"
#include "IDisplayModule.hpp"
#include "IGameModule.hpp"
#include "IArcade.hpp"
#include "IDisplayElem.hpp"
#include "IMovedElem.hpp"

typedef enum {
    ERR_INVALID_ARGS,
    ERR_INVALID_INITIAL,
} error_id_t;

typedef enum {
    SUCCESS = 0,
    FAILURE = 84,
} return_values_t;

typedef unsigned int  uint;
typedef unsigned char uchar;

int error(error_id_t id);

class Arcade: public IArcade {
    public:
        Arcade(std::string &starting_graph);
        ~Arcade();

        void giveInput(char input);
        void startLoop(void);

    protected:
        void loadGame(std::string &game);
        void loadMenu(void);
        void loadDisplay(std::string &display);
        void askInput(void);
        void runTick(void);
        void actuElem(void);
        void loadElem(void);
        void actuDisplay(void);

    private:
        DLLoader<IDisplayModule> *_curr_disp;
        DLLoader<IGameModule> *_curr_game;
        std::vector<IDisplayElem> _dispElem;
        std::vector<IMovedElem> _movedElem;
};

#endif /* !ARCADE_HPP_ */
