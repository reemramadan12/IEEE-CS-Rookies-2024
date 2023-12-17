#include <iostream>

using namespace std;

int sequence(int n) {
    if (n == 1) //base case
        return 1;
    if (n % 2 == 0)
        return 1 + sequence(n / 2); //we added 1 because it'll always be there in the sequence
    else
        return 1 + sequence(3 * n + 1); //same here

}

int main() {
    int n;
    cin >> n;
    cout << sequence(n);
}