CC=g++
FLAGS=-c -std=c++11 -stdlib=libc++
SDL_FLAGS=`sdl2-config --cflags --libs`

all: main.o point.o body.o
	$(CC) main.o point.o body.o -o bin

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

point.o: point.cpp
	$(CC) $(FLAGS) point.cpp

body.o: body.cpp
	$(CC) $(FLAGS) body.cpp
