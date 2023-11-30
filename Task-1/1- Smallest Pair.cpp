#include <iostream>

using namespace std;

int main() {
    int TestCases;
    cin >> TestCases;

    while (TestCases--) {
        int NumberOfElements;
        cin >> NumberOfElements;
        int arr[NumberOfElements + 1];
        for (int i = 1; i <= NumberOfElements; i++) {
            cin >> arr[i];
        }

        int Min = INT_MAX;
        int Equation;
        for (int i = 1; i <= NumberOfElements; i++) {
            for (int j = i + 1; j <= NumberOfElements; j++) {
                Equation = arr[i] + arr[j] + j - i;
                if (Equation < Min)
                    Min = Equation;
            }

        }
        cout << Min << "\n";
    }
    return 0;
}