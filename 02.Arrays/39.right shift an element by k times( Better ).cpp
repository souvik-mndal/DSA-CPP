// WAP to right rotate an array by K positions. BETTER TC:O(n) SC:O(n)
//
// Example:
// Input:  arr = [1, 2, 3, 4, 5], K = 2
// Output: [4, 5, 1, 2, 3]
//
// Explanation: The last two elements (4, 5) move to the front.

#include <iostream>
#include <vector>
using namespace std;

vector<int> rightShiftByK(vector<int> arr, int k) {
    int n = arr.size();
    if (n == 0) {
        return {};
    }

    k = k % n;  // handle cases where k > n
    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++) {
        int index = (i + k) % n;  // compute new index
        ans[index] = arr[i];
    }

    return ans;
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

    int k;
    cout << "Enter the value of k : ";
    cin >> k;

    vector<int> rotated = rightShiftByK(arr, k);

    cout << "Array after right rotation by " << k << ": ";
    for (int x : rotated) cout << x << " ";
    cout << endl;

    return 0;
}
