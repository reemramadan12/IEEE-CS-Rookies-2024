#include <iostream>

using namespace std;

void rightShift(int A[], int N, int X) {
    X = X % N; // to make sure that X remains within the range [0 => N - 1]
    for (int i = N - X; i < N; i++) {
        cout << A[i] << " ";
    }

    for (int i = 0; i < N - X; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main() {
    int N, X;
    cin >> N >> X;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    rightShift(A, N, X);
    return 0;
}