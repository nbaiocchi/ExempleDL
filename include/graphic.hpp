/*
** EPITECH PROJECT, 2022
** cpp_test
** File description:
** graphic
*/

#ifndef GRAPHIC_HPP_
#define GRAPHIC_HPP_

class GraphicDraw
{
    public:
        virtual ~GraphicDraw() = default;
        virtual void drawText(float, float, std::string) = 0;
        virtual int getKeyPress() = 0;
        virtual void clear() = 0;
        virtual void display() = 0;

};

#endif /* !GRAPHIC_HPP_ */
