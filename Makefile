CC = g++

all: hw06

hw06: hw06.cpp hw06.h addbook.cpp delbook.cpp LinkedList.cpp menu.cpp poplist.cpp showbook.cpp showbooks.cpp
	$(CC) -g hw06.cpp addbook.cpp delbook.cpp LinkedList.cpp menu.cpp poplist.cpp showbook.cpp showbooks.cpp -o hw06

clean:
	rm *.o

tar:
	tar cf hw06.tar hw06.h Makefile addbook.cpp delbook.cpp menu.cpp poplist.cpp showbook.cpp showbooks.cpp LinkedList.cpp hw06.cpp