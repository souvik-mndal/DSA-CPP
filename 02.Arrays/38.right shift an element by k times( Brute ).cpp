// WAP to right rotate an array by K positions. BRUTE TC:O(k)+O(n-k)+O(k)
//
// Example:
// Input:  arr = [1, 2, 3, 4, 5], K = 2
// Output: [4, 5, 1, 2, 3]

#include <iostream>
#include <vector>
using namespace std;

void rightShiftByK(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;
    
    k = k % n;  // handle cases where k > n
    vector<int> store;

    // Step 1: Store first k elements
    for (int i = n - k ; i < n ; i++) {
        store.push_back(arr[i]);
    }

    // Step 2: Shift remaining elements to the left
    for (int i = n - 1 ; i >= k; i-- ) {
        arr[i] = arr[i - k];
    }

    // Step 3: Place stored elements at the end
    for (int i = 0; i < k; i++) {
        arr[i] = store[i];
    }
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
