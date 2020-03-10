CC = g++
DEBUG = -g
CFLAGS = -Wall -pedantic-errors -c -std=c++14 $(DEBUG)
LFLAGS = -Wall -pedantic-errors $(DEBUG)

compile: Main.out

Main.out: Main.o ItemType.o CircularLinkedList.o
	$(CC) $(LFLAGS) -o Main.out ItemType.o CircularLinkedList.o Main.o

Main.o: Main.cpp
	$(CC) $(CFLAGS) Main.cpp

ItemType.o: ItemType.cpp ItemType.h
	$(CC) $(CFLAGS) ItemType.cpp

CircularLinkedList.o: CircularLinkedList.cpp CircularLinkedList.h ItemType.h
	$(CC) $(CFLAGS) CircularLinkedList.cpp

run: Main.out
	./Main.out CircularLinkedList/input.txt

clean:
	rm *.o Main.out
