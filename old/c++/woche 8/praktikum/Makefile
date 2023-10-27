main: main.cpp Medium.h Medium.o Audio.h Audio.o Bild.h Bild.o
	g++ main.cpp -o main Medium.o Audio.o Bild.o

Medium: Medium.cpp Medium.h Audio.o Bild.o
	g++ Medium.cpp -c

Audio: Audio.cpp Audio.h
	g++ Audio.cpp -c

Bild: Bild.cpp Bild.h
	g++ Audio.cpp -c