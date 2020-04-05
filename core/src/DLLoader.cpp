/*
** EPITECH PROJECT, 2020
** bootstrap
** File description:
** DLLoader
*/

#include <dlfcn.h>
#include <stdexcept>
#include <iostream>
#include "DLLoader.hpp"
#include "IDisplayModule.hpp"
#include "IGameModule.hpp"

template<typename T>
DLLoader<T>::DLLoader(std::string path, Arcade *arcade)
{
    this->_stream = dlopen(path.c_str(), RTLD_LAZY);
    if (!this->_stream)
        throw std::invalid_argument("Dynamic lib: could'nt be opened");

    T *(*entryPoint) (Arcade *arcade) = (T *(*)(Arcade *arcade)) dlsym(this->_stream,"entryPoint");
    if (!entryPoint)
        throw std::invalid_argument("Dynamic lib: could'nt find entryPoint");

    this->_instance = entryPoint(arcade);
}

template<typename T>
DLLoader<T>::~DLLoader()
{
    delete (this->_instance);
    if (dlclose(this->_stream))
        std::cerr << "Exception: Dynamic lib: could'nt close lib" << std::endl;
}

template<typename T>
T *DLLoader<T>::getInstance() const { return (this->_instance); }

template class DLLoader<IDisplayModule>;
template class DLLoader<IGameModule>;
