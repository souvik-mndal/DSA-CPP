/*
🔹 WAP to find the indices of the two numbers in an array that add up to a given target. OPTIMAL TC:O(nlogn)

🔹 Example:
   Input:
   Enter size of array: 4
   Enter elements: 2 7 11 15
   Enter target: 9

   Output:
   Indices: 0 1
   (Explanation: nums[0] + nums[1] = 2 + 7 = 9)
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>mp;
    for( int i=0 ; i<nums.size() ; i++ ){
        int rem = target-nums[i];
        if( mp.find(rem)!= mp.end()){
            return {i,mp[rem]};
        }
        if( mp.find(rem)== mp.end()){
            mp[nums[i]]=i;
        }
    }
    return {-1,-1};
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (result[0] == -1) {
        cout << "No two numbers found with given sum." << endl;
    } else {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    }

    return 0;
}
