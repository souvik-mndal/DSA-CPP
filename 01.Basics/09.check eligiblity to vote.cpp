// WAP to read a person's age and check if they are eligible to vote.

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to vote" << endl;
    } else {
        cout << "Not eligible to vote" << endl;
    }

    return 0;
}
