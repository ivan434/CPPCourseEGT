#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int number;
    // Вписваме всички 4 цифрени числа
    for (number = 1000; number < 1000; ++number) {
        // извличат се числата
        int thousands = number / 1000;
        int hundreds = (number / 100) % 10;
        int tens = (number / 10) % 10;
        int units = number % 10;

        // Проверяваме дали дали втората и трета цифри са еднакви
        if (hundreds == tens) {
            // Увеличаваме брояча ако условието е спазено
            ++count;
        }
    }

    // Изкарваме принт на това колко са числата
    cout << "The number of four-digit numbers where the second and third digits are the same is: " << count << endl;

    return 0;
}
