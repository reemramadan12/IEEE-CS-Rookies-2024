#include <iostream>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    int wordCount = 0;
    bool lastCharWasWord;

    for (int i = 0; i < S.length(); i++) {
        char currentChar = S[i];

        if (currentChar != ' ' && currentChar != '?' && currentChar != '!' && currentChar != '.' && currentChar != ',') {
            if (!lastCharWasWord) { //to check if the last character isn't a part of a word
                wordCount++;
            }
            lastCharWasWord = true; //setting this flag to true means that this current character is a part of a word
        } else {
            lastCharWasWord = false;
        }
    }

    if (lastCharWasWord) {
        wordCount++; //this is for incrementing the word count for the last word
    }

    cout << wordCount << endl;

    return 0;
}
