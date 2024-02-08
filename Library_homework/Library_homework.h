#pragma once

#include <vector>

#include "Book_homework.h"

using namespace std;

class Library {
public:

	void addBook(Book);
	void print() const;
	void findBook(string) const;

private:

	vector<Book> books;
};
