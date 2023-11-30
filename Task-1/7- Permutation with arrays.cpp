#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int NumberOfElements;
    cin >> NumberOfElements;
    int A[NumberOfElements];
    int B[NumberOfElements];

    for (int i = 0; i < NumberOfElements; i++)
        cin >> A[i];

    for (int i = 0; i < NumberOfElements; i++)
        cin >> B[i];

    sort(A, A + NumberOfElements);
    sort(B, B + NumberOfElements);

    for (int i = 0; i < NumberOfElements; i++) {
        if (A[i] != B[i]) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
