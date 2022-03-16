/*
** EPITECH PROJECT, 2022
** cpp_test
** File description:
** libNcurses
*/

#include "../include/core.hpp"
#include "../include/libNcurses.hpp"

libNcurses::libNcurses()
{
	window = initscr();
	noecho();
	curs_set(FALSE);
}

libNcurses::~libNcurses()
{
	endwin();
}

void libNcurses::drawText(float y, float x, std::string str)
{
    mvprintw(y, x, str.c_str());
}

void libNcurses::display()
{
    wrefresh(window);
}


void libNcurses::clear()
{
	wclear(window);
}

extern "C" {
    void *LoadLib() {
        libNcurses *a = new libNcurses();
        return(a);
    }
}