#include <iostream>

using namespace std;

int main() {
    int TestCases;
    cin >> TestCases;

    while (TestCases--) {
        int NumberOfElements;
        cin >> NumberOfElements;
        int arr[NumberOfElements];
        for (int i = 0; i < NumberOfElements; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < NumberOfElements; i++)
            cout << arr[i] << " ";


        for (int i = 0; i < NumberOfElements; i++) {
            int maxNum = arr[i];
            for (int j = i + 1; j < NumberOfElements; j++) {
                maxNum = max(maxNum, arr[j]);
                cout << maxNum << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}