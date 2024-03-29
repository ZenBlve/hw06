#include "hw06.h"

void addBook (LinkedList& list) {
    Book newBook;
    std::string answer;

    do {
        std::cout << "Enter ISBN: ";
        std::cin.ignore();
        std::getline(std::cin, newBook.isbn);
        std::cout << "Enter Author: ";
        std::getline(std::cin, newBook.author);
        std::cout << "Enter Title: ";
        std::getline(std::cin, newBook.title);
        list.insert(newBook);

        std::cout << "Book has been added successfully." << std::endl;
        std::cout << "Do you want to add another book? (yes/no): ";
        std::getline(std::cin, answer);
    } while (answer == "yes");
}