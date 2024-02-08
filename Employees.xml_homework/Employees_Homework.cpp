#include "Employees.info_Homework.h"

void logOutput(const char* message) {
    // Replace this function with your preferred output mechanism
    // Here, we use printf for simplicity
    printf("%s", message);
}

int main() {
    // Creating three objects of the Employee class
    Employee emp1("John Doe", 101, 50000.0);
    Employee emp2("Jane Smith", 102, 60000.0);
    Employee emp3("Bob Johnson", 103, 55000.0);

    // Creating an object of the Model class
    Model model("Office 1.0", 1);

    // Creating XML document
    pugi::xml_document xmlDoc;

    // Adding root element
    pugi::xml_node rootElement = xmlDoc.append_child("Company");

    // Adding employee information to XML
    emp1.addInfoToXML(rootElement);
    emp2.addInfoToXML(rootElement);
    emp3.addInfoToXML(rootElement);

    // Adding model information to XML
    model.addInfoToXML(rootElement);

    // Saving XML to file
    xmlDoc.save_file("company_info_pugixml.xml");

    // Log the success message
    logOutput("XML document created successfully.\n");

    return 0;
}