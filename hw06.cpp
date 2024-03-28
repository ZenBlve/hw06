#include "hw06.h"

int main() {
    LinkedList list;

    popList(list);

    int choice = 0;
    while (choice != 5) {
        choice = menu();

        if (choice == 1) {
            addBook(list);
        }
        else if (choice == 2) {
            delBook(list);
        }
        else if (choice == 3) {
            showBook(list);
        }
        else if (choice == 4) {
            showBooks(list);
        }
        else if (choice == 5) {
            list.saveToFile();
            std::cout << "Changes saved. Exiting.." << std::endl;
        }
        else {
            std::cout << "Invalid choice." << std::endl;
        }
    }
    return 0;
}