// WAP to read a day number (1-7) and determine if it is a weekday or weekend.

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1 for Monday to 7 for Sunday): ";
    cin >> day;

    if (day >= 1 && day <= 5) {
        cout << "Weekday" << endl;
    } 
    else if (day == 6 || day == 7) {
        cout << "Weekend" << endl;
    } 
    else {
        cout << "Invalid day number" << endl;
    }

    return 0;
}
