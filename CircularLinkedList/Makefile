compile: Main.o ItemType.o CircularLinkedList.o
	g++ -o Main.out ItemType.o CircularLinkedList.o Main.o

Main.out: Main.cpp  
	g++ -c Main.cpp

Main.o: Main.cpp
	Main.cpp

ItemType.o: ItemType.cpp ItemType.h
	g++ -c ItemType.cpp

CircularLinkedList.o: CircularLinkedList.cpp CircularLinkedList.h
	g++ -c CircularLinkedList.cpp

run: Main.out
	./Main.out input.txt

clean:
	rm *.out
	rm *.o
