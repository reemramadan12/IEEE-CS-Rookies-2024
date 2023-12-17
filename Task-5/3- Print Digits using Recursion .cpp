#include <iostream>

using namespace std;

void printSeparatedDigits(int n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    printSeparatedDigits(n / 10); // this recursive call is made to process the number n without the last digit

    cout << n % 10 << " "; // this is executed after completing all the recursions so that every digit of the given number is printed
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        printSeparatedDigits(N);
        cout << " \n";
    }
}