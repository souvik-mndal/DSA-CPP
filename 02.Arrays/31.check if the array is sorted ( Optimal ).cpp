// WAP to check if the given array is sorted in non-decreasing order. OPTIMAL O(n)
//
// Example:
// Input:
// 5
// 1 2 3 4 5
//
// Output:
// The array is sorted.
//
// Example 2:
// Input:
// 5
// 3 5 2 8 9
//
// Output:
// The array is not sorted.

#include <iostream>
#include <vector>
using namespace std;

// Function to check if an array is sorted
bool isSorted(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
