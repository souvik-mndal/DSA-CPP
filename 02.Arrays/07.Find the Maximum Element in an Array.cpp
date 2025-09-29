// WAP to find the maximum element in an array.
//
// Example:
// Input:
// Enter number of elements: 5
// Enter elements: 10 50 20 90 40
//
// Output:
// Maximum element: 90

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
 
int findMaximum(vector<int>& arr) {
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
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

    cout << "Maximum element: " << findMaximum(arr) << endl;

    return 0;
}
