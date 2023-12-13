#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void matrixMul(int A[][MAX_SIZE], int RA, int CA, int B[][MAX_SIZE], int RB, int CB, int C[][MAX_SIZE]) {
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < CA; k++) {
                C[i][j] += A[i][k] * B[k][j]; //the general form for matrix multiplication
            }
        }
    }
}

int main() {
    int RA, CA, RB, CB;
    cin >> RA >> CA;

    int A[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CA; j++) {
            cin >> A[i][j];
        }
    }

    cin >> RB >> CB;
    int B[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < RB; i++) {
        for (int j = 0; j < CB; j++) {
            cin >> B[i][j];
        }
    }
    int C[MAX_SIZE][MAX_SIZE];
    matrixMul(A, RA, CA, B, RB, CB, C);

    for (int i = 0; i < RA; i++) {//the result should have the same number of rows as the 1st matrix
        for (int j = 0; j < CB; j++) {//the result should have same number of columns as the 2nd matrix
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
