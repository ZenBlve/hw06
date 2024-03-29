#ifndef HW06_H
#define HW06_H

#include <string>
#include <iostream>
#include <fstream>
#include <limits>

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
