#pragma once

#include "pugixml.h"

class Employee {
private:
    std::string name;
    int employeeId;
    double salary;

public:
    // Constructor
    Employee(std::string n, int id, double sal);

    // Member function to add employee information to XML
    void addInfoToXML(pugi::xml_node& parent);
};

class Model {
private:
    std::string modelName;
    int version;

public:
    // Constructor
    Model(std::string name, int ver);

    // Member function to add model information to XML
    void addInfoToXML(pugi::xml_node& parent);
};