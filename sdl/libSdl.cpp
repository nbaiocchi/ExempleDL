/*
** EPITECH PROJECT, 2022
** ExempleDL
** File description:
** libSdl
*/

#include "../include/core.hpp"
#include "../include/libSdl.hpp"

#define SCREEN_WIDTH   1920
#define SCREEN_HEIGHT  1080

LibSdl::LibSdl()
{
    SDL_Init(SDL_INIT_VIDEO);
	TTF_Init();

	this->window = NULL;
	this->window = SDL_CreateWindow("Arcade", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1920, 1080, SDL_WINDOW_SHOWN);
	this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED);
	if (!this->window) {
		std::cout << "Cant create WIndow" << std::endl;
		exit(0);
	}
    this->font = TTF_OpenFont("arial.ttf", 20);
}

LibSdl::~LibSdl()
{
    SDL_DestroyWindow(this->window);
	TTF_Quit();
	SDL_Quit();
}
 
void LibSdl::drawText(float y, float x, std::string str)
{
    SDL_Color White = {255, 255, 255};


    SDL_Surface* surfaceMessage = TTF_RenderText_Solid(this->font, str.c_str(), White); 

    SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);

    SDL_Rect Message_rect;
    Message_rect.x = (x * 10) + 10;
    Message_rect.y = y * 22;
    Message_rect.w = 100;
    Message_rect.h = 100;

    SDL_RenderCopy(renderer, Message, NULL, &Message_rect);

    SDL_FreeSurface(surfaceMessage);
    SDL_DestroyTexture(Message);
}

int LibSdl::getKeyPress()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.key.keysym.sym == SDLK_x) {
            return ((int)'x');
        }
	}
    return 0;
}

void LibSdl::display()
{
    SDL_RenderPresent(this->renderer);
}

void LibSdl::clear()
{
	SDL_SetRenderDrawColor(this->renderer, 0, 0, 0, 0);
	SDL_RenderClear(this->renderer);
}

extern "C" {
    void *LoadLib() {
        LibSdl *a = new LibSdl();
        return(a);
    }
}
