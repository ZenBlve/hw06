#include "hw06.h"

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
        std::cout << "Title: " << current->data.title << std::endl;
        std::cout << "Author: " << current->data.author << std::endl;
        std::cout << "ISBN: " << current->data.isbn << std::endl;
        std::cout << std::endl;
        current = current->next;
    }
}

void LinkedList::clear() {
    while (head!= nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::populateFromFile() {
    std::ifstream file("booksdb.txt");
    if (!file.is_open()) {
        std::cout << "File unable to be opened." << std::endl;
        return;
    }
    std::string isbn, author, title;
    while (std::getline(file, isbn) && std::getline(file, author) && std::getline(file, title)) {
    Book book = {isbn, author, title};
    insert(book);
    }
    file.close();
 }

void LinkedList::saveToFile() const {
    std::ofstream file("booksdb.txt");
    if (!file.is_open()){
        std::cout <<"Unable to open file." << std::endl;
        return;
    }
    Node* current = head;
    while (current != nullptr) {
        file << current->data.isbn << std::endl;
        file << current->data.author << std::endl;
        file << current->data.title << std::endl;
        file << std::endl;
        current = current->next;
    }
    file.close();
}