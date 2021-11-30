FLAGS =-Wall -g
CC = gcc

all: connections

connections:main.o libclass.a 
	$(CC) $(FLAGS) -o connections main.o libclass.a


main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

libclass.a: my_mat.o
	ar -rcs libclass.a my_mat.o


my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 	


.PHONY: clean
clean:
	rm -f connections *.o *.a *.so 