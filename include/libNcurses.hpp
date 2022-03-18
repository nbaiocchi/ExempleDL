/*
** EPITECH PROJECT, 2022
** cpp_test
** File description:
** libNcurses
*/

#ifndef LIBNCURSES_HPP_
#define LIBNCURSES_HPP_

#include "graphic.hpp"
#include <ncurses.h>

class libNcurses : GraphicDraw
{
	public:
		libNcurses();
		~libNcurses() override;

		void drawText(float, float, std::string) override;
		int getKeyPress() override;
		void clear() override;
		void display() override;

    private:
			WINDOW *window;
};


#endif /* !LIBNCURSES_HPP_ */

