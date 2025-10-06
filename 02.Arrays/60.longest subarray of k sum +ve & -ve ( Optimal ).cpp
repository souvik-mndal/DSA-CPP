/*
🔹 WAP to find the length of the longest subarray with sum equal to a given number k
   considering pos and neg integers. OPTIMAL TC:O(nlogn)

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
#include <map>
using namespace std;

int longestSubarraySumKPositives(vector<int> a, int k) {
    int n = a.size();
    map<int,int>mp;
    int sum = 0 , largest = 0;
    for( int i=0 ; i<n ; i++ ){
        sum += a[i];
        if( sum == k ){
            largest = max ( largest , (i + 1 ));
        }
        int rem = sum - k;
        if( mp.find(rem) != mp.end() ){
            largest = max ( largest , (i - mp[rem]) );
        }
        if( mp.find(sum) == mp.end() ){
            mp[sum] = i;
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
