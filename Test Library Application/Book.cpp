#include "Book.h"

Book::Book(const std::string& title, const std::string& author, const std::string& isbn, bool available, const std::string& dateAdded)
    : title(title), author(author), isbn(isbn), available(available), dateAdded(dateAdded) {
}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return isbn; }
bool Book::isAvailable() const { return available; }
std::string Book::getDateAdded() const { return dateAdded; }
