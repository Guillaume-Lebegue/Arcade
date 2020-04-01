/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** core main
*/

#include <unistd.h>
#include "Arcade.hpp"

static int arcade(std::string dynlib)
{
    Arcade game(dynlib);
    return (SUCCESS);
}

static bool endsWith(std::string const &s, std::string const &end)
{
    return (s.length() >= end.length() &&
            !s.compare(s.length() - end.length(), end.length(), end));
}

static int help(void)
{
    std::cout << "USAGE\n\t./arcade "
              << "[initial dynamic graphic library]" << std::endl;
    return (SUCCESS);
}

int main(int ac, char **av)
{
    if (ac != 2) return (error(ERR_INV_ARGS));

    std::string dynlib = av[1];

    if (!dynlib.compare("-h") || !dynlib.compare("--help"))
        return (help());
    if (access(av[1], R_OK) != SUCCESS || !endsWith(dynlib, ".so"))
        return (error(ERR_INV_INITIAL));
    return (arcade(dynlib));
}
