#include <iostream>
using namespace std ;

const int MAX_ARRAY_SIZE = 1000;

int main() {
    int arrSize = 0;
    cout << "Enter array size: ";
    cin >> arrSize;

    if (arrSize <= 0 || arrSize > MAX_ARRAY_SIZE) {
        cerr << "Invalid array size. Please enter a positive value less than or equal to " << MAX_ARRAY_SIZE << "." << endl;
        return 1;
    }

    int arr[MAX_ARRAY_SIZE];
    bool foundNumbers = false;

    for (int i = 0; i < arrSize; ++i) {
        int number = 0;
        cout << "Enter a three-digit number: ";
        cin >> number;

        if (abs(number) < 100 || abs(number) > 999) {
            cout << "Please enter a valid three-digit number." << endl;
            i--;
        } else {
            arr[i] = number;
        }
    }

    cout << "Numbers whose digit sum is equal to 9: ";

    for (int j = 0; j < arrSize; ++j) {
        int currNumber = abs(arr[j]);
        int digitSum = 0;

        for (int k = 0; k < 3; ++k) {
            digitSum += currNumber % 10;
            currNumber /= 10;
        }

        if (digitSum == 9) {
            if (!foundNumbers) {
                foundNumbers = true;
            } else {
                cout << ", ";
            }
            cout << arr[j];
        }
    }

    if (foundNumbers) {
        cout << endl;
    } else {
        cout << "None" << endl;
    }

    return 0;
}
