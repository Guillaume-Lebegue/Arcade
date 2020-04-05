/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** CoreMovedElem
*/

#ifndef COREMOVEDELEM_HPP_
#define COREMOVEDELEM_HPP_

#include "IMovedElem.hpp"

class CoreMovedElem: public IMovedElem {
	public:
		CoreMovedElem(int id, position_t pos, bool visible);
		~CoreMovedElem() = default;

		int getId(void) const;
		position_t getPosition(void) const;
		bool getVisible(void) const;

	protected:
	private:
		int _id;
		position_t _position;
		bool _visible;
};

#endif /* !COREMOVEDELEM_HPP_ */
