/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** IMovedElem
*/

#ifndef IMOVEDELEM_HPP_
#define IMOVEDELEM_HPP_

typedef struct {
    unsigned int x;
    unsigned int y;
} position_t;

class IMovedElem {
public:
    virtual ~IMovedElem() = default;

    virtual int        getId(void)       const = 0;
    virtual position_t getPosition(void) const = 0;
    virtual bool       getVisible(void)  const = 0;
};

#endif /* !IMOVEDELEM_HPP_ */
