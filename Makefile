C=gcc
FLAGS= -Wall -g

all: connections maino.o my_mat.o

connections: main.o my_mat.o
	                $(CC) $(FLAGS) -o connections main.o my_mat.o






main.o: main.c my_mat.h
	                $(CC) $(FLAGS) -c main.c






my_mat.o: my_mat.c
	                $(CC) $(FLAGS) -c my_mat.c -o my_mat.o


.PHONY: clean

clean:
	                        rm -f connections *.a *.so *.o
