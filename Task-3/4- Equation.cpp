#include<bits/stdc++.h>

using namespace std;

long long equation(int X, int N) { // X = base, N = power
    long long result = 0;
    for (int i = 2; i <= N; i += 2) {
        result += pow(X, i);
    }
    return result;
}

int main() {
    int X, N;
    cin >> X >> N;
    cout << equation(X, N) << "\n";
    return 0;
}