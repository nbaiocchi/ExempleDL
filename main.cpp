/*
** EPITECH PROJECT, 2022
** cpp_test
** File description:
** main
*/

#include "include/core.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    Core *core = new Core(av[1]);

    core->myGame();
    return (0);
}