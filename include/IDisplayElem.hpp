/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** IDisplayElem
*/

#ifndef IDISPLAYELEM_HPP_
#define IDISPLAYELEM_HPP_

#include <string>

typedef struct {
	int x;
	int y;
} position_t;

class IDisplayElem {
	public:
		virtual ~IDisplayElem() = default;

		virtual int getId(void) const = 0;
		virtual bool getVisible(void) const = 0;
		virtual position_t getPosition(void) const = 0;
		virtual std::string getFilePath(void) const = 0;
		virtual char getCharDisp(void) const = 0;

		virtual int chgVisible(bool visible) = 0;
		virtual int chgPosition(position_t &newPos) = 0;
};

#endif /* !IDISPLAYELEM_HPP_ */
