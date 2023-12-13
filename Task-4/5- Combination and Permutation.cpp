#include <iostream>

using namespace std;

long long fact(int n) {
    if (n >= 1)
        return n * fact(n - 1);
    return 1;
}

long long NCR(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

long long NPR(int n, int r) {
    return fact(n) / fact(n - r);
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << NCR(A, B) << " " << NPR(A, B);
    return 0;
}
