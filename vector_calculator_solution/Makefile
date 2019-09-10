CFLAGS = -std=c99 -Wall
CC = gcc

vector_calculator: main.o calculator.o vector.o
	$(CC) $(CFLAGS) main.o calculator.o vector.o -o vector_calculator

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

calculator.o: calculator.c calculator.h
	$(CC) $(CFLAGS) -c calculator.c

vector.o: vector.c vector.h
	$(CC) $(CFLAGS) -c vector.c

clean:
	rm -f vector_calculator *.o
