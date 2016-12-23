#ifndef __CLIENT__DEF__
#define __CLIENT__DEF__

#define DEFAULT_WINDOW_X SDL_WINDOWPOS_UNDEFINED
#define DEFAULT_WINDOW_Y SDL_WINDOWPOS_UNDEFINED
#define DEFAULT_WINDOW_W 640
#define DEFAULT_WINDOW_H 480
#define DEFAULT_WINDOW_TITLE "Game Window"
//#define DEFAULT_WINDOW_FLAGS SDL_WINDOW_OPENGL | SDL_WINDOW_BORDERLESS
#define DEFAULT_WINDOW_FLAGS SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN

#include <SDL2/SDL.h>

class Surface {
};

class Environment {
	public:
		void delay(int);
		Environment();
};

class Window {
	public:
		SDL_Window* sdlWindow;
		SDL_Surface* sdlSurface;
		Window();
};

class Client {
	public:
};

#endif
