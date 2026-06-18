#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.141592653589793;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Using pow() from cmath to handle the exponentiation requirement
    double area = PI * pow(radius, 2);
    
    cout << "The area of the circle is: " << area << endl;
    return 0;
}
