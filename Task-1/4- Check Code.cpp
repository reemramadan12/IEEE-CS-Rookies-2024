#include <iostream>

using namespace std;


int main() {
    int A, B;
    string S;
    cin >> A >> B;
    cin >> S;

    if (S[A] != '-') {
        cout << "No";
        return 0;
    }

    int Slength = S.length();
    bool check = 0;
    for (int i = 0; i < Slength; i++) {
        if ((S[i] < '0' || S[i] > '9') && i != A)
            check = 1;
    }
    if (check == 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}