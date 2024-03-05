#include <SDL.h>
#include "SDL_image.h" 
#pragma once

class Game
{
public:
		Game(); 
		~Game();

		void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
		
		void HandleEvents();
		void update();
		void render();
		void clean();

		bool running();

private:
	bool isRunning = true;
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
};
