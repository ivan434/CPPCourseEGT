#include <iostream>
using namespace std;


int main() {
    // Въвеждане на число от клавиатурата
    int n;
    cout << "Въведете число N: ";
    cin >> n;

    // Проверка дали числото се дели на 7 и 2
    if (n % 7 == 0 and n % 2 == 0) {
        cout << n << " се дели и на 7, и на 2." << endl;
    }  
    else {
        cout << n << " не се дели и на 7, и на 2." << endl;
    }

    return 0;
}
