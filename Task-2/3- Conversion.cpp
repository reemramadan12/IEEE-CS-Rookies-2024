#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ',')
            S[i] = ' ';
        else if (S[i] >= 'A' && S[i] <= 'Z')
            S[i] += 32; //converting uppercase to lowercase
        else if (S[i] >= 'a' && S[i] <= 'z')
            S[i] -= 32; //converting lowercase to uppercase
    }
    cout << S;
    return 0;
}
