#include <iostream>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    int wordCount = 0;
    bool inWord = false; //flag that is used to keep track of whether the program is currently processing characters that are part of a word

    for (int i = 0; i < S.length(); i++) {
        char currentChar = S[i];

        // Check if the current character is a letter (lowercase or uppercase)
        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z')) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << wordCount << endl;

    return 0;
}
