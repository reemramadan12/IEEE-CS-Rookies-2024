#include <iostream>

using namespace std;

int N, M;
int arr[11][11];

int maxPathSum(int start, int end) {
    if (start == N - 1 && end == M - 1) {
        return arr[start][end];
    } else if (start == N + 1 || end == M + 1) {
        return -1000000;
    }
    int right = maxPathSum(start, end + 1);
    int down = maxPathSum(start + 1, end);
    return arr[start][end] + max(right, down);// -100000
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    cout << maxPathSum(0, 0);
}

