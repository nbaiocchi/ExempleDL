/*
** EPITECH PROJECT, 2019
** OOP_arcade_2018
** File description:
** Core
*/

#ifndef TEST_ARCADE
#define TEST_ARCADE

#include <vector>
#include <dlfcn.h>
#include <map>
#include <ncurses.h>
#include <dirent.h>
#include <fstream>
#include <unistd.h>
#include <unistd.h>
#include <iostream>
#include "graphic.hpp"

class Core
{
    public :
        Core(std::string);
        ~Core();
        void myGame();

    private:
        GraphicDraw * mylibs;
        void *libhandle;
};

#endif
