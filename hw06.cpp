#include "hw06.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList()
{
    clear();
}

void LinkedList::insert(const Book &book)
{
    Node *newNode = new Node(book);
    newNode->next = head;
    head = newNode;
}

void LinkedList::remove(const std::string &isbn)
{
    Node *current = head;
    Node *previous = nullptr;

    while (current != nullptr && current->data.isbn != isbn)
    {
        previous = current;
        current = current->next;
    }

    if (current == nullptr)
    {
        std::cout << "Book with ISBN " << isbn << "not found." << std::endl;
        return;
    }

    if (previous == nullptr)
    {
        head = head->next;
    }
    else
    {
        previous->next = current->next;
    }

    delete current;
}

void LinkedList::display(const std::string &isbn) const
{
    Node *current = head;
    while (current != nullptr && current->data.isbn != isbn)
    {
        current = current->next;
    }
    if (current != nullptr)
    {
        std::cout << "Title: " << current->data.title << std::endl;
        std::cout << "Author " << current->data.author << std::endl;
        std::cout << "ISBN: " << current->data.isbn << std::endl;
    }
    else
    {
        std::cout << "Book with ISBN " << isbn << " not found." << std::endl;
    }
}

void LinkedList::displayAll() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << "Title " << current->data.title << std::endl;
    }
}