#include <iostream>
#include <vector>
#include "Book.h"
#include "Sort Books.h"

using namespace std;

int main() {
    // Correct initializations
    Book book1("Fight Club", "Chuck Palahniuk", "9781784878542", true, "2025-04-01");
    Book book2("Lord of the Flies", "William Golding", "978-0399501487", true, "2023-04-02");
    Book book3("Demian", "Herman Hesse", "9780143106784", false, "2023-04-03");

    std::vector<Book> validBooks = { book1, book2, book3 };
    printBooks(validBooks, "Correct Initialisation");

    // Simulated incorrect initializations
    Book badBook1("None", "", "", false, "??");
    Book badBook2("12345", "", "", true, "");
    Book badBook3("", "None", "", false, "0000-00-00");

    std::vector<Book> invalidBooks = { badBook1, badBook2, badBook3 };
    printBooks(invalidBooks, "Incorrect Initialisation");

    // Sorting tests
    std::vector<Book> booksAsc = { book2, book3, book1 };
    std::vector<Book> booksDesc = { book1, book3, book2 };
    std::vector<Book> booksMixed = { book3, book1, book2 };

    printBooks(booksAsc, "Before Sort (Ascending by ISBN)");
    sortBooksByISBN(booksAsc);
    printBooks(booksAsc, "After Sort (Ascending by ISBN)");

    printBooks(booksDesc, "Before Sort (Descending by ISBN)");
    sortBooksByISBNDescending(booksDesc);
    printBooks(booksDesc, "After Sort (Descending by ISBN)");

    printBooks(booksMixed, "Unsorted (Mixed Order by ISBN)");

    return 0;
}