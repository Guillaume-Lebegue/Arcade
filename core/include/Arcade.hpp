/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** core include
*/

#include <iostream>

typedef enum {
    ERR_INVALID_ARGS,
    ERR_INVALID_INITIAL,
} error_id_t;

typedef enum {
    SUCCESS = 0,
    FAILURE = 84,
} return_values_t;

typedef unsigned int  uint;
typedef unsigned char uchar;

int error(error_id_t id);
