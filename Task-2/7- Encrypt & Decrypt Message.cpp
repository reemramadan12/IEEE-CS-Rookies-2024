#include <iostream>

using namespace std;

int main() {
    int Q;
    cin >> Q;
    string S;
    cin >> S;
    int index; // for storing the index of the character in the Original or Key string

    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    if (Q == 1) {
        for (int i = 0; i < S.length(); i++) {
            for (int j = 0; j < Original.length(); j++) {
                if (S[i] == Original[j]) {
                    index = j;
                    break;
                }
            }
            cout << Key[index];
        }
    } else {
        for (int i = 0; i < S.length(); i++) {
            for (int j = 0; j < Key.length(); j++) {
                if (S[i] == Key[j]) {
                    index = j;
                    break;
                }
            }
            cout << Original[index];
        }
    }
}