all: data.o 
	gcc data.o main.c -o main

data.o	: data.h
	gcc -c data.c

clean: 
	rm -rf *.o

run:
	./main