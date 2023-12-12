#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int maxSize = 1; //we started with 1 because any single character in the string S is a subsequence of size 1

    for (int i = 1; i < N; i++) {
        if (S[i] != S[i - 1])
            maxSize++;
    }
    cout << maxSize << "\n";
    return 0;
}