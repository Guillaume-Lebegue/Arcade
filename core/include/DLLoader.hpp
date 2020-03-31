/*
** EPITECH PROJECT, 2020
** bootstrap
** File description:
** DLLoader
*/

#ifndef DLLOADER_HPP_
#define DLLOADER_HPP_

#include <string>

template<typename T>
class DLLoader {
	public:
		DLLoader(std::string path);
		~DLLoader();
		T *getInstance() const;

	private:
		T *_instance;
		void *_stream;
};

#endif /* !DLLOADER_HPP_ */
