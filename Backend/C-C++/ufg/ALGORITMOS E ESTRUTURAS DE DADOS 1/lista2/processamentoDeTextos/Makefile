all: texto.o 
	gcc texto.o main.c -o main

texto.o	: texto.h
	gcc -c texto.c

clean: 
	rm -rf *.o

run:
	./main