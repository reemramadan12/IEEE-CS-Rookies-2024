#include <iostream>

using namespace std;

void print(int &N) {
    for (int i = 1; i < N; i++) { //i<N because we don't want to print a space after the last number
        cout << i << " ";
    }
    cout << N;
}
int main() {
    int N;
    cin >> N;
    print(N);
    return 0;
}


