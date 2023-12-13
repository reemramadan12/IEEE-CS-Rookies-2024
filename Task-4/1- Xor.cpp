#include <iostream>

using namespace std;

long long F(long long A, long long B, long long Q) {

    int check = Q % 3;//instead of using recursion because it takes up a lot of space in the memory
    if (check == 1)
        return A;
    else if (check == 2)
        return B;
    else
        return (A ^ B);
}

int main() {
    long long A, B, Q;
    cin >> A >> B >> Q;
    cout << F(A, B, Q);
    return 0;
}