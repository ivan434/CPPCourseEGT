#pragma once

#include "pugixml.h"
#include <vector>
#ifndef EMPLOYEES_INFO_HOMEWORK_H
#define EMPLOYEES_INFO_HOMEWORK_H
#endif 

class Workstation {
private:
    int building;
    int floor;
    int desc;

public:
    // Constructor
    Workstation(int b, int f, int d);

    // Member function to add workstation information to XML
    void addInfoToXML(pugi::xml_node& parent);
};

class Employee {
private:
    std::string name;
    std::string type;
    int age;
    Workstation workstation;

public:
    // Constructor
    Employee(std::string n, std::string t, int a, Workstation ws);

    // Member function to add employee information to XML
    void addInfoToXML(pugi::xml_node& parent);
};

class EmployeesData {
private:
    int formatVersion;
    std::vector<Employee> employees;

public:
    // Constructor
    EmployeesData(int version);

    // Member function to add employee data to XML
    void addInfoToXML(pugi::xml_node& parent);
};