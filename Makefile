CC=g++
FLAGS=-c -std=c++11 -stdlib=libc++
SDL_FLAGS=`sdl2-config --cflags --libs`

all: main.o vec2.o point.o body.o client.o
	$(CC) $(SDL_FLAGS) main.o vec2.o point.o body.o client.o -o bin

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

vec2.o: vec2.cpp
	$(CC) $(FLAGS) vec2.cpp

point.o: point.cpp
	$(CC) $(FLAGS) point.cpp

body.o: body.cpp
	$(CC) $(FLAGS) body.cpp

client.o: client.cpp
	$(CC) $(FLAGS) client.cpp
