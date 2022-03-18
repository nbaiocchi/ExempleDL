/*
** EPITECH PROJECT, 2022
** cpp_test
** File description:
** libSfml
*/

#include "../include/core.hpp"
#include "../include/libSfml.hpp"

LibSfml::LibSfml()
{
	window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Arcade", sf::Style::Close | sf::Style::Resize);
	window->setActive(false);
	window->clear();
	font.loadFromFile("arial.ttf");
	text.setCharacterSize(20);
	text.setFont(font);
}

LibSfml::~LibSfml()
{
    this->window->close();
}

void LibSfml::drawText(float y, float x, std::string str)
{
    text.setPosition(sf::Vector2f{x * 10, y * 22});
    text.setString(str);
    window->draw(text);
}

int LibSfml::getKeyPress()
{
    while (this->window->pollEvent(this->event)) {
        if (event.type == sf::Event::KeyPressed) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
                return ((int)'x');
        }
    }
    return 0;
}

void LibSfml::display()
{
	this->window->display();
}

void LibSfml::clear()
{
	this->window->clear();
}

extern "C" {
    void *LoadLib() {
        LibSfml *a = new LibSfml();
        return(a);
    }
}