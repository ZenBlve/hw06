#include "hw06.h"

void addBook (LinkedList& list) {
    Book newBook;
    std::cout << "Enter ISBN: ";
    std::cin.ignore();
    std::getline(std::cin, newBook.isbn);
    std::cout << "Enter author: ";
    std::getline(std::cin, newBook.author);
    std::cout << "ENter title: ";
    std::getline(std::cin, newBook.title);
    list.insert(newBook);
    std::cout << "Book has been added successfully." << std::endl;
}