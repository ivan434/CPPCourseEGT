#include <iostream>

const double PI = 3.14159;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double rad) : radius(rad) {}

    // Member functions to calculate area and circumference
    double calculateArea() const {
        return PI * (radius * radius);
    }

    double calculateCircumference() const {
        return 2 * PI * radius;
    }
};

int main() {
    // Input the radius of the circle
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Create a circle object
    Circle circle(radius);

    // Calculate and display the area
    double area = circle.calculateArea();
    std::cout << "Area: " << area << std::endl;

    // Calculate and display 
    double circumference = circle.calculateCircumference();
    std::cout << "Circumference: " << circumference << std::endl;

    return 0;
}
