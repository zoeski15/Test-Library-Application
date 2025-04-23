#include <iostream>
#include <vector>
#include "Book.h"
#include "Sort Books.h"

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

int main() {
    // Correct initializations
    Book book1("Fight Club", "Chuck Palahniuk", "9781784878542", true, "2025-04-01");
    Book book2("Lord of the Flies", "William Golding", "978-0399501487", true, "2023-04-02");
    Book book3("Demian", "Herman Hesse", "9780143106784", false, "2023-04-03");

    std::vector<Book> validBooks = { book1, book2, book3 };
    printBooks(validBooks, "Correct Initialisation");

    // "Incorrect" initializations 
    Book badBook1("", "", "", false, "not-a-date"); 
    Book badBook2("", "", "123456789", true, "");
    Book badBook3("Fight Club", "Herman Hesse", "", false, ""); // wrong author

    std::vector<Book> invalidBooks = { badBook1, badBook2, badBook3 };
    printBooks(invalidBooks, "Incorrect Initialisation");

    // Sorting scenarios
    std::vector<Book> booksAsc = { book2, book3, book1 };
    std::vector<Book> booksDesc = { book1, book3, book2 };
    std::vector<Book> booksMixed = { book3, book1, book2 };

    printBooks(booksAsc, "Before Sort (Ascending)");
    sortBooks(booksAsc);
    printBooks(booksAsc, "After Sort (Ascending)");

    printBooks(booksDesc, "Before Sort (Descending)");
    sortBooks(booksDesc);
    printBooks(booksDesc, "After Sort (Descending)");

    printBooks(booksMixed, "Before Sort (Mixed)");
    sortBooks(booksMixed);
    printBooks(booksMixed, "After Sort (Mixed)");

    return 0;
}

