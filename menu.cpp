#include "hw06.h"

int menu() {
    int choice;
    std::cout << "Select from the following options:" << std::endl;
    std::cout << "1. Add a book" << std::endl;
    std::cout << "2. Delete a book" << std::endl;
    std::cout << "3. Display a book" << std::endl;
    std::cout << "4. Display all books" << std::endl;
    std::cout << "5. Save and exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}