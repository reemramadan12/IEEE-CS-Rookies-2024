#include <iostream>

using namespace std;


void swapRows(int A[][500], int rowX, int rowY, int N) {
    for (int i = 0; i < N; i++) {
        swap(A[rowX - 1][i], A[rowY - 1][i]); // the -1 part is because it isn't a zero indexed matrix
    }
}

void swapColumns(int A[][500], int colX, int colY, int N) {
    for (int i = 0; i < N; i++) {
        swap(A[i][colX - 1], A[i][colY - 1]);
    }
}

void print(int A[][500], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    int A[N][500];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    swapRows(A, X, Y, N);
    swapColumns(A, X, Y, N);
    print(A, N);

    return 0;
}