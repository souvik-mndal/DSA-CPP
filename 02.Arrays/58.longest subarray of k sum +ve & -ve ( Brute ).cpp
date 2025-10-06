/*
🔹 WAP to find the length of the longest subarray with sum equal to a given number k
   considering pos and neg integers. BRUTE TC:O(i*j*l)

🔹 Example:
   Input:
   Enter the size of array: 5
   Enter the elements: 1 2 3 2 5
   Enter value of k: 5

   Output:
   Length of longest subarray with sum 5: 2
*/

#include <iostream>
#include <vector>
using namespace std;

int longestSubarraySumKPositives(vector<int> a, int k) {
    int n = a.size();
    int largest = 0; // storing length of subarray
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int l = i; l <= j; l++) {
                sum += a[l];
            }
            if (sum == k) {
                largest = max(largest, j - i + 1);
            }
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    int ans = longestSubarraySumKPositives(arr, k);
    cout << "Length of longest subarray with sum " << k << ": " << ans << endl;

    return 0;
}
