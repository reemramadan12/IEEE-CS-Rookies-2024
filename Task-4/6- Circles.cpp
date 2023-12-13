#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double X1, Y1, X2, Y2, X3, Y3, X4, Y4;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    double centerAx = (X1 + X2) / 2;
    double centerAy = (Y1 + Y2) / 2;
    double centerBx = (X3 + X4) / 2;
    double centerBy = (Y3 + Y4) / 2;
    double rA = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2)) / 2.0;
    double rB = sqrt(pow(X4 - X3, 2) + pow(Y4 - Y3, 2)) / 2.0;
    double distance = sqrt(pow(centerAx - centerBx, 2) +
                           pow(centerAy - centerBy, 2)); //the distance between the centers of circle A and circle B

    if (distance <= (rA + rB))//when the distance between the two centers is less than or equal to the sum of the two radii this means that they intersect
        cout << "YES";
    else
        cout << "NO";
    return 0;
}