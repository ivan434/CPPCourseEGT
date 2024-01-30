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
         // напиши "stop" зада излезеш от програмата
        if (input == "stop") {
            cout << "Излизане от порграмта." << endl;
            break;
        }

        // Convert 
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
