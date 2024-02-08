#include "Employees.info_Homework.h"


void logOutput(const char* message) {
    // Replace this function with your preferred output mechanism
    // Here, we use printf for simplicity
    printf("%s", message);
}

int main() {
    // Creating three objects of the Employee class
    Workstation ws1(2, 3, 5);
    Workstation ws2(2, 3, 6);
    Workstation ws3(3, 1, 1);

    Employee emp1("John", "Part-Time", 23, ws1);
    Employee emp2("Sean", "Full-Time", 34, ws2);
    Employee emp3("Sarah", "Part-Time", 55, ws3);

    // Creating an object of the EmployeesData class
    EmployeesData employeesData(1);

    // Adding employees to EmployeesData
    employeesData.addInfoToXML(emp1);
    employeesData.addInfoToXML(emp2);
    employeesData.addInfoToXML(emp3);

    // Creating XML document
    pugi::xml_document xmlDoc;

    // Adding root element
    pugi::xml_node rootElement = xmlDoc.append_child("Root");

    // Adding employee data to XML
    employeesData.addInfoToXML(rootElement);

    // Saving XML to file
    xmlDoc.save_file("employees_data.xml");

    // Log the success message
    logOutput("XML document created successfully.\n");

    return 0;
}