#include <iostream>

class Triangle {
public:
    // Constructor
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Function to determine the type of triangle
    void determineType() const {
        if (side1 == side2 && side2 == side3) {
            std::cout << "Equilateral Triangle" << std::endl;
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            std::cout << "Isosceles Triangle" << std::endl;
        }
        else {
            std::cout << "Scalene Triangle" << std::endl;
        }
    }

private:
    double side1;
    double side2;
    double side3;
};

int main() {
    // Input the lengths of the three sides of the triangle
    double s1, s2, s3;
    std::cout << "Enter the lengths of the three sides of the triangle:\n";
    std::cout << "Side 1: ";
    std::cin >> s1;
    std::cout << "Side 2: ";
    std::cin >> s2;
    std::cout << "Side 3: ";
    std::cin >> s3;

    // Create a Triangle object
    Triangle triangle(s1, s2, s3);

    // Determine and display the type of triangle
    triangle.determineType();

    return 0;
}
