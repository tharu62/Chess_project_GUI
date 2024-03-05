#include <SDL.h>
#include "Game.h"

int main(int argc, char* argv[]) {

	Game* game = new Game();

	game->init("CHESS", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600, false);

	while (game->running()) {
		game->HandleEvents();
		game->update();
		game->render();
	}

	game->clean();

	return 0;

}