//WAP to take input in an char array of size 10 and print it.
#include <iostream>
using namespace std;

int main() {
    char arr[10];
    cout << "Enter the elements of the char array: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "The elements of the char array are: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}