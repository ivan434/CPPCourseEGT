
#include "Employees.info_Homework.h"


// Implementation of the Workstation class
Workstation::Workstation(int b, int f, int d) : building(b), floor(f), desc(d) {}

void Workstation::addInfoToXML(pugi::xml_node& parent) {
    pugi::xml_node workstationNode = parent.append_child("Workstation");

    workstationNode.append_attribute("Building").set_value(building);
    workstationNode.append_attribute("Floor").set_value(floor);
    workstationNode.append_attribute("Desc").set_value(desc);
}

// Implementation of the Employee class
Employee::Employee(std::string n, std::string t, int a, Workstation ws)
    : name(n), type(t), age(a), workstation(ws) {}

void Employee::addInfoToXML(pugi::xml_node& parent) {
    pugi::xml_node employeeNode = parent.append_child("Employee");

    employeeNode.append_attribute("Name").set_value(name.c_str());
    employeeNode.append_attribute("Type").set_value(type.c_str());
    employeeNode.append_attribute("Age").set_value(age);

    // Add workstation information to XML
    workstation.addInfoToXML(employeeNode);
}

// Implementation of the EmployeesData class
EmployeesData::EmployeesData(int version) : formatVersion(version) {}

void EmployeesData::addInfoToXML(pugi::xml_node& parent) {
    pugi::xml_node employeesDataNode = parent.append_child("EmployeesData");

    employeesDataNode.append_attribute("FormatVersion").set_value(formatVersion);

    // Add employee information to XML
    for (const auto& employee : employees) {
        employee.addInfoToXML(employeesDataNode);
    }
}