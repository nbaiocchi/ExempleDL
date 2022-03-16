/*
** EPITECH PROJECT, 2022
** cpp_test
** File description:
** libSfml
*/

#ifndef LIBSFML_HPP_
#define LIBSFML_HPP_

#include "graphic.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class LibSfml : GraphicDraw
{
	public:
		LibSfml();
		~LibSfml() override;

		void drawText(float, float, std::string) override;
		void clear() override;
		void display() override;

	private:
		sf::RenderWindow *window;
		sf::Font font;
		sf::Text text;
};

#endif /* !LIBSFML_HPP_ */