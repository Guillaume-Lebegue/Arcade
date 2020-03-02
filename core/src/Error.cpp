/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** error manager
*/

#include <stdlib.h>
#include "../include/Arcade.hpp"

int error(error_id_t id)
{
    switch (id) {
    case ERR_INVALID_ARGS :
        std::cout << "Invalid number of arguments." << std::endl;
        std::cout << "Try './arcade --help' for more information."<< std::endl;
        break;
    case ERR_INVALID_INITIAL :
        std::cout << "Couldn't open initial library." << std::endl;
        std::cout << "Try './arcade --help' for more information."<< std::endl;
        break;
    default :
        std::cout << "Unknown error." << std::endl;
        std::cout << "Try './arcade --help' for more information."<< std::endl;
        break;
    }
    return (FAILURE);
}
