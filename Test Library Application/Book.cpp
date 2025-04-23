#include "Book.h"

Book::Book(std::string title, std::string author, std::string isbn, bool available, std::string dateAdded)
    : title(title), author(author), isbn(isbn), available(available), dateAdded(dateAdded) {
}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return isbn; }
bool Book::isAvailable() const { return available; }
std::string Book::getDateAdded() const { return dateAdded; }
