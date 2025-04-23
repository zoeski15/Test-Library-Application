#pragma once
#include <vector>
#include "Book.h"

void sortBooksByISBN(std::vector<Book>& books);
void sortBooksByISBNDescending(std::vector<Book>& books);
void printBooks(const std::vector<Book>& books, const std::string& heading);