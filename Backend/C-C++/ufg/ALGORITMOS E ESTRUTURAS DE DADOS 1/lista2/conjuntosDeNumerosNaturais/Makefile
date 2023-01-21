all: conjuntos.o 
	gcc conjuntos.o main.c -o main

conjuntos.o	: conjuntos.h
	gcc -c conjuntos.c

clean: 
	rm -rf *.o

run:
	./main
	
