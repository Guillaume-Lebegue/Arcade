/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** IDisplayElem
*/

#ifndef IDISPLAYELEM_HPP_
#define IDISPLAYELEM_HPP_

typedef struct {
	int x;
	int y;
} position_t;

class IDisplayElem {
	public:
		virtual ~IDisplayElem() = default;

		virtual int chgDisplay(bool visible) = 0;
		virtual int chgPos(position_t &newPos) = 0;
		virtual bool getDisplay(void) = 0;
		virtual position_t &getPos(void) = 0;

	protected:
	private:
};

#endif /* !IDISPLAYELEM_HPP_ */
