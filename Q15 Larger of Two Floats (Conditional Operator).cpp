#include <iostream>
using namespace std;

int main() {
    float f1, f2;
    cout << "Enter two floating-point numbers: ";
    cin >> f1 >> f2;

    float max_val = (f1 > f2) ? f1 : f2;

    cout << "The larger number is: " << max_val << endl;
    return 0;
}
