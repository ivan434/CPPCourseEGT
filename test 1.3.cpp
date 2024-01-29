#include <iostream>
using namespace std;


int main() {
    int n;

    // Въвеждаме големина на масива
    cout << "Въведете големина на масива: ";
    cin >> n;

    // Въвеждаме елементи са масива
    int A[n];
    cout << "Въведете елементи на масива:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> A[i];
    }

    // Калкулираме стойноста на всички четни елементи
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] % 2 == 0) {
            sum += A[i];
        }
    }

    // Показваме резултат
    cout << "The sum of even-valued elements in the array is: " << sum << endl;

    return 0;
}
