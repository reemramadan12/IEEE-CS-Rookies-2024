#include <iostream>

using namespace std;

void isPrime(int N) {
    bool check = false;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            check = true;  // this means that the number given isn't prime
            break;  // Exit the loop early once a divisor is found
        }
    }

    if (!check) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int TestCases;
    cin >> TestCases;

    while (TestCases--) {
        int N;
        cin >> N;
        if (N == 1) {
            cout << "NO\n";
        } else {
            isPrime(N);
        }
    }

    return 0;
}
