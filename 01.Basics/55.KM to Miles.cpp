// WAP to convert a distance from kilometers to miles.
// 1 kilometer = 0.621371 miles

// Example 1:
// Input: 10
// Output: 6.21371

// Example 2:
// Input: 5
// Output: 3.106855

#include <iostream>
using namespace std;
 
double convertKmToMiles(int Km) {
    return Km * 0.621371;
}

int main() {
    int km;
    cout << "Enter distance in kilometers: ";
    cin >> km;

    cout << km << " km = " << convertKmToMiles(km) << " miles" << endl;

    return 0;
}
