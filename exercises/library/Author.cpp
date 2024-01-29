#include "Author.h"
#pragma once

#include <iostream>
#include <string>
using namespace std ;


class Author {
public:
    // Constructor
    Author(const string& fName, const string& lName, const string& nationality)
        : firstName(fName), lastName(lName), nationality(nationality) {}

    // Getter functions
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getNationality() const { return nationality; }

    // Setter functions
    void setFirstName(const string& fName) { firstName = fName; }
    void setLastName(const string& lName) { lastName = lName; }
    void setNationality(const string& n) { nationality = n; }

    // Display function
    void print() const {
        cout << firstName << " " << lastName << " " << nationality << endl;
    }

private:
    // Private member variables
    string firstName;
    string lastName;
    string nationality;
};
