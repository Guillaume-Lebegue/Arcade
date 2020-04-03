/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** IArcade
*/

#ifndef IARCADE_HPP_
#define IARCADE_HPP_

class IArcade {
public:
    virtual ~IArcade() = default;

    virtual void giveInput(char input) = 0;
};

#endif /* !IARCADE_HPP_ */
