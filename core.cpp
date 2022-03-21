/*
** EPITECH PROJECT, 2022
** cpp_test
** File description:
** core
*/

#include "include/core.hpp"

typedef void *(*Loader)();

Core::Core(std::string libPath)
{
    Loader func;
    char *error;

    this->libhandle = dlopen(libPath.c_str(), RTLD_LAZY);

    func = (Loader) dlsym(this->libhandle, "LoadLib");
    if ((error = dlerror()) != nullptr) {
        fputs(error, stderr);
        exit(84);
    }
    mylibs = static_cast<GraphicDraw *>(func());
}

Core::~Core()
{
    dlclose(this->libhandle);
}

void Core::myGame()
{
    while (1)
    {
        mylibs->clear();
        mylibs->drawText(20, 90, "THIS IS A TEST");
        if (mylibs->getKeyPress() == QUIT) {
            delete mylibs;
            return;
        }
        mylibs->display();
    }
}