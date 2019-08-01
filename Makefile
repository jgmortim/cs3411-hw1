CC = gcc
FLAGS = -pedantic -Wall

target: arraysum.c
	$(CC) $(FLAGS) arraysum.c -o arraysum
clean:
	rm arraysum -f *.o
