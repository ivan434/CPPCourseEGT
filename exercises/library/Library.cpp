#include "Library.h"
#include <string>
using namespace std;

void Library::addBook(Book b) {
	this->books.push_back(b);
}

void Library::print() const {
	for (Book book : books) {
		book.print();
	}
}

void Library::findBook(string text) const {
	for (Book book : books) {
		//if (book.getTitle().find(text) != -1) { - is same with under
		if (book.getTitle().find(text) != string::npos) {
			cout << "\nWe found the book " << endl;
			book.print();
			break;
		}
	}
}
