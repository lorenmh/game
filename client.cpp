#include <stdexcept>
#include <string>

#include "client.h"

#include <SDL2/SDL.h>

using std::runtime_error;
using std::string;

string sdlError() {
	return string("SDL Error: ") + SDL_GetError() + string("\n");
}

Environment::Environment() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		throw runtime_error(sdlError());
	}
}

void Environment::delay(int ms) {
	SDL_Delay(ms);
}

Window::Window() {
	sdlWindow = SDL_CreateWindow(
			DEFAULT_WINDOW_TITLE,
			DEFAULT_WINDOW_X,
			DEFAULT_WINDOW_Y,
			DEFAULT_WINDOW_W,
			DEFAULT_WINDOW_H,
			DEFAULT_WINDOW_FLAGS
	);

	if (sdlWindow == NULL) {
		throw runtime_error(sdlError());
	}

	 sdlSurface = SDL_GetWindowSurface(sdlWindow);

	 SDL_FillRect(sdlSurface, NULL, SDL_MapRGB( sdlSurface->format, 0xFF, 0xFF, 0xFF));

	 SDL_UpdateWindowSurface(sdlWindow);
}
