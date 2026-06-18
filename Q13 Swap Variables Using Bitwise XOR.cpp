#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter value for X and Y: ";
    cin >> x >> y;

    cout << "Before swap: X = " << x << ", Y = " << y << endl;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << "After swap: X = " << x << ", Y = " << y << endl;
    return 0;
}
