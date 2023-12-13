#include <iostream>

using namespace std;

long long GCD(long long A, long long B) { //A>B according to Euclidean algorithm
    while (B != 0) {//for example GCD(54,24)
        long long temp = A;//temp = 54
        A = B;//A = 24
        B = temp % A; //B = 54 % 24 = 6 ==>GCD(24,6)
        //B isn't equal zero so the loop iterates one more time now temp = 24, A = B = 6 and B = 24 % 6 = 0 so the loop stops and GCD(54,24) = 6
    }
    return A; //6
}

long long LCM(long long A, long long B) {
    return (A * B) / GCD(A, B);
}

int main() {
    long long A, B;
    cin >> A >> B;
    cout << GCD(A, B) << " " << LCM(A, B);
    return 0;
}
