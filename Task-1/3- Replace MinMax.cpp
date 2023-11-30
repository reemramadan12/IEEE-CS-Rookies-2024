#include <iostream>

using namespace std;

int main() {
    int NumberOfElements;
    cin >> NumberOfElements;
    int arr[NumberOfElements];
    int Max = INT_MIN;
    int Min = INT_MAX;

    for (int i = 0; i < NumberOfElements; i++) {
        cin >> arr[i];
    }
    int MinPos, MaxPos;
    for (int i = 0; i < NumberOfElements; i++) {
        Max = max(Max, arr[i]); //10
        Min = min(Min, arr[i]); //1
        if (arr[i] == Min)
            MinPos = i; //index = 1
        else if (arr[i] == Max)
            MaxPos = i; //index = 3
    }
    int temp = arr[MinPos];
    arr[MinPos] = arr[MaxPos];
    arr[MaxPos] = temp;

    for (int i = 0; i < NumberOfElements; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}