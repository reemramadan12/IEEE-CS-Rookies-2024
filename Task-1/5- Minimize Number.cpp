#include <iostream>

using namespace std;

int main() {
    int NumberOfElements;
    cin >> NumberOfElements;
    int arr[NumberOfElements];

    for (int i = 0; i < NumberOfElements; i++) {
        cin >> arr[i];
    }
    int NumOfDiv = 0;
    int Min = INT_MAX;
    for (int i = 0; i < NumberOfElements; i++) {
        NumOfDiv = 0;
        while (arr[i] % 2 == 0) {
            NumOfDiv++;
            arr[i] /= 2;
        }
        Min = min(NumOfDiv, Min);
    }
    cout << Min;
    return 0;
}
