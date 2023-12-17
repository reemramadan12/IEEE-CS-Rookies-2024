#include <iostream>

using namespace std;

int knapSack(int W, int weight[], int value[], int items) {
    if (W == 0 || items == 0) {
        return 0;
    }
    if (weight[items - 1] > W) {
        return knapSack(W, weight, value, items - 1);
    } else {
        return max(
                value[items - 1] + knapSack(W - weight[items - 1], weight, value, items - 1), // 90
                knapSack(W, weight, value, items - 1) // 50 + 30 = 80
        );
    }

}

int main() {
    int N, W1;
    cin >> N >> W1;
    int weight[N];
    int value[N];
    for (int i = 0; i < N; i++) {
        cin >> weight[i] >> value[i];
    }
    cout << knapSack(W1, weight, value, N) << endl;
}