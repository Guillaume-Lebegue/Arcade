/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** CoreDisplayElem
*/

#ifndef COREDISPLAYELEM_HPP_
#define COREDISPLAYELEM_HPP_

#include "IDisplayElem.hpp"

class CoreDisplayElem: public IDisplayElem {
	public:
		CoreDisplayElem(int id, bool visibility, position_t pos, std::string filePath, char charDisp);
		~CoreDisplayElem() = default;

		int getId(void) const;
		bool getVisible(void) const;
		position_t getPosition(void) const;
		std::string getFilePath(void) const;
		char getCharDisp(void) const;

		int chgVisible(bool visible);
		int chgPosition(position_t &newPos);

	protected:
	private:
		int _id;
		bool _visibility;
		position_t _position;
		std::string _filePath;
		char _charDisp;
};

#endif /* !COREDISPLAYELEM_HPP_ */
