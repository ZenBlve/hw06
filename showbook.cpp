#include "hw06.h"

void showBook(const LinkedList& list) {
    std:: string isbn;
    std::cout << "Enter ISBN of the book you'd like to display: ";
    std::getline(std::cin, isbn);
    list.display(isbn);
}