#include <iostream>
using namespace std;

double readNumber() {
    double number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

double maxNumber(double a, double b, double c) {
    return max({a, b, c});
}

void printSolution(double num, double a, double b, double c) {
    cout << "The biggest number from " << a << ", " << b << " and " << c << " is " << num << endl;
}

int main() {
    double a, b, c;
    cout << "Enter three numbers:\n";
    a = readNumber();
    b = readNumber();
    c = readNumber();

    double max = maxNumber(a, b, c);

    printSolution(max, a, b, c);

    return 0;
}
