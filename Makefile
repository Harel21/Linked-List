CC=gcc
FLAGS=-Wall -std=c11 -c
BIN=lkndList

make:
	$(CC) $(FLAGS) main.c linkedlist.c 
	$(CC) main.o linkedlist.o -o $(BIN)

clean:
	rm *.o
