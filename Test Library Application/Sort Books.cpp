#include "Sort Books.h"
#include <iostream>
#include <algorithm>

void sortBooksByISBN(std::vector<Book>& books) {
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.getISBN() < b.getISBN();
        });
}

void sortBooksByISBNDescending(std::vector<Book>& books) {
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.getISBN() > b.getISBN();
        });
}

void printBooks(const std::vector<Book>& books, const std::string& heading) {
    std::cout << "\n=== " << heading << " ===\n";
    for (const Book& book : books) {
        std::cout << "Title: " << book.getTitle() << "\n"
            << "Author: " << book.getAuthor() << "\n"
            << "ISBN: " << book.getISBN() << "\n"
            << "Availability: " << (book.isAvailable() ? "Available" : "Not Available") << "\n"
            << "DateAdded: " << book.getDateAdded() << "\n"
            << "-----------------------------\n";
    }
}