#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    int larger = (n1 > n2) ? n1 : n2;

    cout << "The larger number is: " << larger << endl;
    return 0;
}
