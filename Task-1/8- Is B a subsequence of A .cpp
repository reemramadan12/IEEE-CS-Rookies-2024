#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[N];
    int B[M];

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < M; i++)
        cin >> B[i];

    int pointerA = 0;
    int pointerB = 0;

    while (pointerA < N && pointerB < M) {
        if (A[pointerA] == B[pointerB]) {
            pointerA++;
            pointerB++;
        } else
            pointerA++;
    }

    if (pointerB == M)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
