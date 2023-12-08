#include <iostream>

using namespace std;

void isPrime(int N) {
    bool check = 0;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            check = 1;// this means that the number given isn't prime
        }
        if (check == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    int TestCases;
    cin >> TestCases;
    int N;

    while (TestCases--) {
        cin >> N;
        if (N == 1) {
            cout << "NO\n";
            continue;
        }
        isPrime(N);
    }


}
