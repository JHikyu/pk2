main: main.c upper.o queue.o
	gcc main.c -o main upper.o queue.o

upper.o: upper.c upper.h
	gcc upper.c -c

queue.o: queue.c queue.h
	gcc queue.c -c