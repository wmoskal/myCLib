mylib: myclib.c myclib.h
	gcc -Wall -pedantic -std=c11 -g myclib.c -o myclib

clean:
	rm myclib;
