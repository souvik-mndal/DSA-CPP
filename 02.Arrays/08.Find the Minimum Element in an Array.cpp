// WAP to find the minimum element in an array.
//
// Example:
// Input:
// Enter number of elements: 5
// Enter elements: 10 50 20 90 40
//
// Output:
// Minimum element: 90

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
 
int findMinimum(vector<int>& arr) {
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Minimum element: " << findMinimum(arr) << endl;

    return 0;
}
