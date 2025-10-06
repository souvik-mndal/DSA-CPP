// WAP to find the missing number in an array containing numbers from 0 to N.OPTIMAL-1 TC:O(n) SC:O(1)
//THIS METHOD IS NOT THAT GREAT BECAUSE IT MIGHT GO BIGGER NUMBER LIKE 10^5  
// The array has N distinct numbers taken from 0, 1, 2, ..., N, so one number is missing.
//
// Example:
// Input: [3, 0, 1]
// Output: 2
//
// Explanation: N = 3, so the numbers should be 0, 1, 2, 3. Missing number is 2.

#include <iostream>
#include <vector>
using namespace std;

// Function to find the missing number
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = (n * ( n + 1 ))/2;
    for( int i=0 ; i<n ; i++ ){
        sum -= nums[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Missing number: " << missingNumber(nums) << endl;

    return 0;
}
