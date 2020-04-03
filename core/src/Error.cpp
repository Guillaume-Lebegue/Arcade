/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** error manager
*/

#include <stdlib.h>
#include "Arcade.hpp"

int error(error_id_t id)
{
    switch (id) {
    case ERR_INV_ARGS :
        std::cout << "Invalid number of arguments." << std::endl;        break;
    case ERR_INV_INIT :
        std::cout << "Couldn't access the initial library." << std::endl;break;
    default :
        std::cout << "Unknown error." << std::endl;                      break;
    }
    std::cout << "Try './arcade --help' for more information."<< std::endl;
    return (FAILURE);
}
