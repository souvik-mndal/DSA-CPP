// WAP to read length and breadth of a rectangle and print its area.

#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "The area of rectangle is: " << (long long)length * breadth << endl;
    return 0;
}
