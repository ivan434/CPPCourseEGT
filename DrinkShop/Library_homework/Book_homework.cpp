#include Book.h
#pragma once
using namespace std;
#include <iostream>
#include <string>

class Author {
public:
    Author(const string& fName, const string& lName, const string& nationality)
        : firstName(fName), lastName(lName), nationality(nationality) {}

    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getNationality() const { return nationality; }

    void setFirstName(const string& fName) { firstName = fName; }
    void setLastName(const string& lName) { lastName = lName; }
    void setNationality(const string& n) { nationality = n; }

    void print() const {
        cout << firstName << " " << lastName << " " << nationality << endl;
    }

private:
    string firstName;
    string lastName;
    string nationality;
};

class Book {
public:
    Book(const string& title, const string& genre, int year, const Author& a)
        : title(title), genre(genre), year(year), author(a) {}

    string getTitle() const { return title; }
    string getGenre() const { return genre; }
    int getYear() const { return year; }

    void setTitle(const string& title) { this->title = title; }
    void setGenre(const string& g) { genre = g; }
    void setYear(int y) { year = y; }

    void print() const {
        cout << getTitle() << " " << getYear() << " " << getGenre() << endl;
        author.print();
    }

private:
    string title;
    string genre;
    int year;
    Author author;
};
