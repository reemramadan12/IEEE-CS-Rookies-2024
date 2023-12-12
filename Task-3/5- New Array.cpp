#include <iostream>

using namespace std;

void concOf(int A[], int B[], int C[], int N) {
    int index = 0; //the index of the new array C
    for (int i = 0; i < N; i++) {
        C[index] = B[i];
        index++;
    }
    for (int i = 0; i < N; i++) {
        C[index] = A[i];
        index++;
    }
}

int main() {
    int N;
    cin >> N;
    int A[N];
    int B[N];
    int C[2 * N]; // because it stores both arrays A and B

    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];

    concOf(A, B, C, N);

    for (int i = 0; i < 2 * N; i++) {
        cout << C[i] << " ";
    }
    return 0;
}