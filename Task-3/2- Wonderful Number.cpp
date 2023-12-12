#include <iostream>

using namespace std;

bool isPalindrome(const string &S) {
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1])
            return false;
    }
    return true;
}

string binaryRep(int N) {
    string binary = "";
    while (N > 0) {
        binary = char('0' + N % 2) +
                 binary; // the "+ binary" part makes sure that the new character is added to the front of the binary string
        N /= 2;
    }
    return binary;
}

int main() {
    int N;
    cin >> N;

    if (N % 2 == 0) {
        cout << "NO";
    } else {
        string S = binaryRep(N);
        if (isPalindrome(S)) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}
