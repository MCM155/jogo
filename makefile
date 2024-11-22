make:
	g++ -c main.cpp
	g++ main.o -o jogo -lsfml-graphics -lsfml-window -lsfml-system
	./jogo
	make clean
	clear
clean:
	rm jogo
	rm main.o