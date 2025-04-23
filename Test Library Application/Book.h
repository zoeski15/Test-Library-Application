#pragma once
#include <string>

class Book {
public:
    Book(std::string title, std::string author, std::string isbn, bool available, std::string dateAdded);

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    bool isAvailable() const;
    std::string getDateAdded() const;

private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;
    std::string dateAdded;
};
