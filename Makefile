CC = gcc
CFLAGS = -Wall

all: main

main: main.o vector_3D.o
	$(CC) $(CFLAGS) -o main main.o vector_3D.o

main.o: main.c vector_3D.h
vector_3D.o: vector_3D.c vector_3D.h

clean:
	rm -f *.o main
