// WAP to right rotate an array by K positions. OPTIMAL TC:O(n/2)+O(n/2)
//
// Example:
// Input:  arr = [1, 2, 3, 4, 5], K = 2
// Output: [4, 5, 1, 2, 3]

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rightShiftByK(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;
    
    k = k % n;  // handle cases where k > n
    
    reverse( arr.begin() , arr.end() );
    reverse( arr.begin() , arr.begin() + k );
    reverse( arr.begin() + k , arr.end() );
}

int main() {
    // Example demonstration
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k : ";
    cin >> k;

    rightShiftByK(arr, k);

    cout << "Array after right rotation by " << k << ": ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
