CC = g++
DEBUG = -g
CFLAGS = -Wall -pedantic-errors -c -std=c++14 $(DEBUG)
LFLAGS = -Wall -pedantic-errors $(DEBUG)

compile: Main.out

Main.out: Main.o ItemType.o DoublyLinkedList.o
	$(CC) $(LFLAGS) -o Main.out ItemType.o DoublyLinkedList.o Main.o

Main.o: Main.cpp
	$(CC) $(CFLAGS) Main.cpp

ItemType.o: ItemType.cpp ItemType.h
	$(CC) $(CFLAGS) ItemType.cpp

CircularLinkedList.o: DoublyLinkedList.cpp DoublyLinkedList.h ItemType.h
	$(CC) $(CFLAGS) DoublyLinkedList.cpp

run: Main.out
	./Main.out DoublyLinkedList input.txt

clean:
	rm *.o Main.out
