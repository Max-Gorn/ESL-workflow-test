program: main.o vector3.o
	gcc -o program main.o vector3.o

main.o: main.c vector3.h
	gcc -c main.c

vector3.o: vector3.c vector3.h
	gcc -c vector3.c

clean:
	rm -f main.o vector3.o program

.PHONY: clean
