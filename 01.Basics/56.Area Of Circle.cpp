// WAP to calculate the area of a circle given its radius.
// Formula: Area = π * r^2
// Here, π is approximated as 3.14

// Example 1:
// Input: 5
// Output: 78

// Example 2:
// Input: 10
// Output: 314

#include <iostream>
using namespace std;

double areaOfCircle(int radius) {
    return 3.14 * radius * radius;
}

int main() {
    int r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    cout << "Area of the circle = " << areaOfCircle(r) << endl;

    return 0;
}
