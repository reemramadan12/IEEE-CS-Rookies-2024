#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    string S;

    while (T--) {
        cin >> S;
        bool check = 0; //to check whether the for loop has ended because of the break statement or because the for loop has done its iteration

        for (int i = 1; i < S.length() - 1; i++) {
            if (S[i] == '0' && S[i - 1] == '1' && S[i + 1] == '1') {
                cout << "Good\n";
                check = 1;
                break;
            } else if (S[i] == '1' && S[i - 1] == '0' && S[i + 1] == '0') {
                cout << "Good\n";
                check = 1;
                break;
            }
        }
        if (check == 0)
            cout << "Bad\n";
    }
    return 0;
}