.DEFAULT_GOAL := all

OBJECTS= build/Level.o build/Player.o build/Snake.o build/SnakeGame.o

build/Level.o: src/Level.cpp include/Level.h 
	g++ -Iinclude src/Level.cpp -c -o build/Level.o

build/Player.o: src/Player.cpp include/Player.h 
	g++ -Iinclude src/Player.cpp -c -o build/Player.o

build/Snake.o: src/Snake.cpp include/Snake.h 
	g++ -Iinclude src/Snake.cpp -c -o build/Snake.o

build/SnakeGame.o: src/SnakeGame.cpp include/SnakeGame.h 
	g++ -Iinclude src/SnakeGame.cpp -c -o build/SnakeGame.o

objects: $(OBJECTS)

Snaze: objects src/Snaze.cpp
	g++ -Wall -fsanitize=address -Iinclude $(OBJECTS) src/Snaze.cpp -o build/Snaze

clean:
	rm build/*.o build/Snaze

all: Snaze

run:
	./build/Snaze