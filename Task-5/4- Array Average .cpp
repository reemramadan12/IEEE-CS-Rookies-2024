#include <iostream>
#include <iomanip>  // For setprecision

using namespace std;

double Average(int A[], int size, int index = 0, double sum = 0) {
    if (index == size) {// base case
        return sum / size;
    }

    sum += A[index];// to add the current element to the sum

    return Average(A, size, index + 1, sum); //then this is called recursively with the updated index ==> index+1 and the updated sum
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << fixed << setprecision(6) << Average(A, N, 0, 0) << endl; // to make sure that the average calculation starts from the first element, the sum is initially set to zero

    return 0;
}