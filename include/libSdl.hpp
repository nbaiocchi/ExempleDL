/*
** EPITECH PROJECT, 2022
** cpp_test
** File description:
** libSfml
*/

#ifndef LIBSDL_HPP_
#define LIBSDL_HPP_

#include "graphic.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class LibSdl : GraphicDraw
{
	public:
		LibSdl();
		~LibSdl() override;

		void drawText(float, float, std::string) override;
		int getKeyPress() override;
		void clear() override;
		void display() override;

	private:
        SDL_Window *window;
		SDL_Renderer *renderer;
		SDL_Surface *ecran;
		TTF_Font* font;
};

#endif /* !LIBSDL_HPP_ */