#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;
    int cntr = 1;//to keep track of the test case number

    while (cntr <= T) {
        long long N; //number of rectangles
        cin >> N;
        long long x1, y1, x2, y2, max1, maxy1, minx2, miny2;
        cin >> x1 >> y1 >> x2 >> y2;
        max1 = x1, maxy1 = y1, minx2 = x2, miny2 = y2;

        for (int i = 1; i < N; i++) { //The loop iterates over the remaining rectangles (from the second rectangle onwards) and updates max1, maxy1, minx2, and miny2 to represent the overall boundaries of all rectangles
            cin >> x1 >> y1 >> x2 >> y2;
            max1 = max(max1, x1);
            maxy1 = max(maxy1, y1);
            minx2 = min(minx2, x2);
            miny2 = min(miny2, y2);
        }
        if (minx2 > max1 && miny2 > maxy1)//to check whether there is common area or not
            cout << "Case #" << cntr << ": " << (minx2 - max1) * (miny2 - maxy1);
        else
            cout << "Case #" << cntr << ": " << 0;

        cntr++;
    }
    return 0;
}