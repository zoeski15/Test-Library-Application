#pragma once
#include "Book.h"
#include <algorithm>
#include <vector>

bool compareByTitle(const Book& a, const Book& b) {
    return a.getTitle() < b.getTitle();
}

void sortBooks(std::vector<Book>& books) {
    std::sort(books.begin(), books.end(), compareByTitle);
}
