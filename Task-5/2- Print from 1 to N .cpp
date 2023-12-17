#include <iostream>

using namespace std;

void printNums(int n) {
    if (n == 0) // base case
        return;

    printNums(n - 1);

    cout << n << "\n";
}

int main() {
    int N;
    cin >> N;

    printNums(N);

    return 0;
}