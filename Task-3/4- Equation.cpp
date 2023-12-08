#include <iostream>

using namespace std;

int power(int X, int N) {
    int answer = 1;
    for (int i = 0; i < N; i++) {
        answer *= X;
    }
    return answer;
}

int main() {
    int X, N;
    cin >> X >> N;
    int S = 0;
    for (int i = 2;
         i <= N; i += 2) { // we started from i=2 because the first term is always going to be zero (5^0 - 1 = 0)
        S += power(X, i);
    }
    cout << S;
    return 0;
}