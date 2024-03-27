#ifndef HW06_H
#define HW06_H

#include <string>

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

#endif
