#ifndef HW06_H
#define HW06_H
/****************************************************************************
 * Christopher Rafanan  *   CS1B TTh 7:30-9:30  Assig 6 *
 * Linked Lists - Books Database    *   Due: Thursday,  March 28th, 2024    *
 * *************************************************************************/
#include <string>
#include <iostream>
#include <fstream>
#include <limits>

/************************************************
 * Book Database
 * **********************************************
 * This program is able to take books and store
 * them in a list, delete the book entries based
 * on their ISBN, show a single book by their
 * ISBN, show the entire list, and write the list
 * to a text file. The program has a maximum of
 * 10 books.
 * **********************************************
 * INPUTS
 * -Menu choice
 * -ISBN of book to enter
 * -Author of book to enter
 * -Title of book to enter
 * 
 * OUTPUTS
 * -List of books entered into database in a text
 * file 
 * *********************************************/

struct Book {
    std::string isbn;
    std::string author;
    std::string title;
};

class LinkedList {
private:
    struct Node {
        Book data;
        Node* next;
        Node(const Book& book) : data(book), next(nullptr) {}
    };
    Node* head;

public:
    LinkedList();
    ~LinkedList();
    void insert(const Book& book);
    void remove(const std::string& isbn);
    void display(const std::string& isbn) const;
    void displayAll() const;
    void clear();
    void populateFromFile();
    void saveToFile() const;
};

void addBook(LinkedList& list);
void delBook(LinkedList& list);
void showBook(const LinkedList& list);
void showBooks(const LinkedList& list);
void popList(LinkedList& list);
int menu();

#endif
