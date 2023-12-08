#include <iostream>

using namespace std;

int maxNum(int A[], int N) {
    int max = A[0];
    for (int i = 0; i < N; i++) {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

int minNum(int A[], int N) {
    int min = A[0];
    for (int i = 0; i < N; i++) {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}

bool isPrime(int N) {
    if (N == 1)
        return 0;
    for (int i = 2; i < N; i++) {
        if (N % i == 0)
            return 0;
    }
    return 1;
}

bool isPalindrome(int N) {
    int temp = N;
    int reversed = 0;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    return reversed == N;
}

int numOfDivisors(int N) {
    int cntr = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0)// this means that the i is a divisor
            cntr++;
    }
    return cntr;
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int primeCntr = 0;
    int palindromeCntr = 0;
    int maxElement = A[0];
    int divNum = numOfDivisors(A[0]);

    cout << "The maximum number : " << maxNum(A, N) << "\n";
    cout << "The minimum number : " << minNum(A, N) << "\n";

    cout << "The number of prime numbers : ";
    for (int i = 0; i < N; i++) {
        if (isPrime(A[i]))
            primeCntr++;
    }
    cout << primeCntr << "\n";

    cout << "The number of palindrome numbers : ";
    for (int i = 0; i < N; i++) {
        if (isPalindrome(A[i]))
            palindromeCntr++;
    }
    cout << palindromeCntr << "\n";

    cout << "The number that has the maximum number of divisors : ";
    for (int i = 0; i < N; i++) {
        if (numOfDivisors(A[i]) > divNum) {
            divNum = numOfDivisors(A[i]);
            maxElement = A[i];
        } else if (numOfDivisors(A[i]) == divNum) {
            if (A[i] > maxElement)
                maxElement = A[i];
        }
    }
    cout << maxElement << "\n";
    return 0;
}