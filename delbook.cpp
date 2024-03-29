#include "hw06.h"

void delBook(LinkedList& list) {
    std::string isbn;
    std::cout << "Enter ISBN of the book you'd like to delete: ";
    std::getline(std::cin, isbn);
    list.remove(isbn);
    std::cout << "Book deleted successfully." << std::endl;
}