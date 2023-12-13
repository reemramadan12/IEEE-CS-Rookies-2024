#include <iostream>
#include <string>

using namespace std;

string addStrings(string num1, string num2) {// Function to add two strings representing large numbers
    int carry = 0;
    string result;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;
        result = to_string(digit) + result;
        i--;
        j--;
    }

    return result;
}

string multiplyString(string num, int factor) {// Function to multiply a string representing a large number by an integer
    int carry = 0;
    string result;
    for (int i = num.length() - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        int product = digit * factor + carry;
        carry = product / 10;
        int digitResult = product % 10;
        result = to_string(digitResult) + result;
    }
    if (carry > 0) {
        result = to_string(carry) + result;
    }
    return result;
}

int main() {
    string N;
    cin >> N;

    string sum = addStrings(N, "9999");
    string product = multiplyString(N, 9999);

    cout << sum << "\n";
    cout << product;

    return 0;
}