#include <iostream>

using namespace std;

int main() {
    int TestCases;
    cin >> TestCases;

    while (TestCases--) {
        int Counter = 0;
        int NumberOfElements;
        cin >> NumberOfElements;
        int arr[NumberOfElements];
        for (int i = 0; i < NumberOfElements; i++)
            cin >> arr[i];

        for (int i = 0; i < NumberOfElements; i++) {
            Counter++;
            for (int j = i + 1; j < NumberOfElements; j++) {
                if (arr[j] > arr[j - 1])
                    Counter++;
                else
                    break;
            }

        }
        cout << Counter << "\n";
    }
    return 0;
}
