#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;
    string S1 = "hello"; //target

    int j = 0; // a pointer for the targeted string

    for (int i = 0; i < S.length() && j < S1.length(); i++) {
        if (S[i] == S1[j]) {
            j++; // to move the pointer to the next character in the targeted string
        }
    }

    if (j == S1.length())
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}