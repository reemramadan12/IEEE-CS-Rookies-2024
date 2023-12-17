#include <iostream>

using namespace std;

bool reachValue(long long value, long long N) {
    if (value == N)
        return true;
    if (value > N)
        return false;

    return reachValue(value * 10, N) || reachValue(value * 20, N);

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        if (reachValue(1, N)) //to check whether the starting value of 1 can reach the target value N
            cout << "YES\n";
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
