// company_info.cpp

#include "Employees.info_Homework.h"

// Implementation of the Employee class
Employee::Employee(std::string n, int id, double sal) : name(n), employeeId(id), salary(sal) {}

void Employee::addInfoToXML(pugi::xml_node& parent) {
    pugi::xml_node employeeNode = parent.append_child("Employee");

    employeeNode.append_child("Name").text().set(name.c_str());
    employeeNode.append_child("EmployeeID").text().set(employeeId);
    employeeNode.append_child("Salary").text().set(salary);
}

// Implementation of the Model class
Model::Model(std::string name, int ver) : modelName(name), version(ver) {}

void Model::addInfoToXML(pugi::xml_node& parent) {
    pugi::xml_node modelNode = parent.append_child("Model");

    modelNode.append_child("ModelName").text().set(modelName.c_str());
    modelNode.append_child("Version").text().set(version);
}