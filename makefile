make:
	g++ -c main.cpp dino.cpp 
	g++ main.o dino.o -o jogo -lsfml-graphics -lsfml-window -lsfml-system
	./jogo
	make clean
	clear
clean:
	rm jogo
	rm main.o
	rm dino.o