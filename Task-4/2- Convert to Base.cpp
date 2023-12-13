#include <bits/stdc++.h>

using namespace std;

long long charToInt(char c) { //to convert a character to its integer representation
    if (c >= '0' && c <= '9')
        return c - '0'; //for example c = '3', then '3' - '0' = 51 - 48 = 3 "as an integer"
    else
        return c - 'A' +
               10;// for example c = 'A', then 'A' - 'A' + 10 = 0 + 10 = 10 "10 is A according to the hexadecimal no. convention"
}

char intToChar(long long n) {//to convert an integer to its character representation
    if (n >= 0 && n <= 9)
        return n + '0'; //for example n = 3, then 3 + '0' = 3 + 48 = 51 ==> '3'
    else
        return n - 10 + 'A'; //for example n = 12, then 12 - 10 + 'A' = 2 + 65 = 67 ==> 'C'
}

long long baseToDecimal(char *N, long long X) {
    long long size = strlen(N);
    long long decimal = 0;
    long long power = 0;
    for (int i = size - 1; i >=
                           0; i--) {//it iterates over each character of the string from the right to the left and converts each character to decimal
        decimal += charToInt(N[i]) * pow(X, power);
        power++;
    }
    return decimal;
}

char *decimalToBase(char converted[], long long X, long long N) {
    int index = 0;
    while (N > 0) {
        converted[index++] = intToChar(N % X); //for example N=5 and X=2, then intToChar(5%2) = '1' stored in converted[0]
        N /= X; //N= N/X = 5/2 = 2, so N is equal to 2 now and so on
    }
    converted[index] = '\0'; //to add a null character at the end
    reverse(converted, converted + index);//to get the correct order of the character representation
    return converted;
}
int main(){
    int T;
    cin >> T;

    if (T == 1) {
        char arr[35] = "";
        cin >> arr;
        long long X;
        cin >> X;
        cout << baseToDecimal(arr,X);
    } else if (T == 2) {
        long long N, X;
        cin >> N >> X;
        char converted[100];
        cout << decimalToBase(converted, X, N);
    }
}