//WAP to print the array using an function.
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printArray(arr, n);

    return 0;
}