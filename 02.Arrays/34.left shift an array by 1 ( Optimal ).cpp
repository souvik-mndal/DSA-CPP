// WAP to left rotate an array by one position (first element becomes the last). OPTIMAL TC:O(n)
//
// Example:
// Input:  1 2 3 4 5
// Output: 2 3 4 5 1

#include <iostream>
#include <vector>
using namespace std;

// Function to left-rotate the array by one (modifies the array in-place)
void leftRotateOne(vector<int>& arr) {
    if (arr.empty()) return;            // handle empty array
    int start = arr[0];                 // store first element
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        arr[i] = arr[i + 1];            // shift elements left
    }
    arr[arr.size() - 1] = start;        // put first element at the end
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
    leftRotateOne(arr);

    cout << "After left rotation by one: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
