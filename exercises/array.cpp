#include <iostream>
#include <algorithm>
using namespace std ;

int main() {
    const int n = 14;
    int arr[n]{}; // 10 0 12 85 -5 8 3 -9 12 -78 6 65 9 3

    cout << "Enter " << n << " integers for the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Input array is: ";
    for (int k = 0; k < n; ++k) {
        cout << arr[k] << " ";
    }
    cout << "\n\n";

    int lastElement = arr[n - 1];
    int startIdx = (lastElement % 2 == 0) ? 1 : 0;

    cout << "Last element is: " << lastElement << "\n\n";

    int filteredArr[7]{};
    int filteredArrSize = 0;

    for (int idx = startIdx; idx < n; idx += 2) {
        filteredArr[filteredArrSize++] = arr[idx];
    }

    cout << "Filtered array is: ";
    for (int j = 0; j < filteredArrSize; ++j) {
        cout << filteredArr[j] << " "; // 10 12 -5 3 12 6 9
    }
    cout << "\n\n";

    sort(filteredArr, filteredArr + filteredArrSize, greater<int>());

    cout << "Sorted array is: ";
    for (int j = 0; j < filteredArrSize; ++j) {
        cout << filteredArr[j] << " ";
    }
    cout << "\n\n";

    double middleElement = filteredArr[3];
    cout << "The middle element is: " << middleElement << "\n\n";

    bool find = false;
    int sumArray[4]{};
    int sumArrayIdx = 0;

    for (int y = 0; y < filteredArrSize; ++y) {
        int currSum = (filteredArr[y] + filteredArr[(filteredArrSize - 1) - y]);
        sumArray[sumArrayIdx++] = currSum;

        if (sumArrayIdx == 3) {
            break;
        }
    }

    cout << "SumArray is: ";
    for (int d = 0; d < sumArrayIdx; ++d) {
        cout << sumArray[d] << " ";
    }

    cout << "\n\n";

    cout << "Numbers greater than the middle element are: ";
    for (int z = 0; z < sumArrayIdx; ++z) {
        if (sumArray[z] > middleElement) {
            if (!find) {
                find = true;
            } else {
                cout << ", ";
            }
            cout << sumArray[z];
        }
    }

    cout << endl;

    if (!find) {
        cout << "No numbers found that are greater than: " << middleElement << "." << endl;
    }

    return 0;
}
