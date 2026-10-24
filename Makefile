vector3.o: vector3.c vector3.h
	gcc -c vector3.c

clean:
	rm -f vector3.o

.PHONY: clean
