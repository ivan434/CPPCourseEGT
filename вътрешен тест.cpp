#include <iostream>
using namespace std;
#include <string>

int main() {
    int number;
    string input;

    while (true) {
       
     // напиши число
        cout << "Въведете число или 'stop' за да излезнеш от програмата: ";
        cin >> number;
         // Check if the input is "stop" to break the loop
        if (input == "stop") {
            cout << "Exiting the program." << endl;
            break;
        }

        // Convert the input to an integer
        int number = stoi(input);

    // провери дали е четно или не четно
        if (number % 2 == 0) {
        cout << number << " числото е четно." << endl;
        } else {
        cout << number << " числото е не четно." << endl;
        }
    }
    return 0;
}
