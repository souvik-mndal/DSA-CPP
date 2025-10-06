/*
🔹 WAP to check if there exists a pair of elements in the array whose sum equals a given target. BRUTE TC:O(nlogn)+O(n)

🔹 Example:
   Input:
   Enter the size of array: 5
   Enter elements: 1 4 3 2 5
   Enter target sum: 7

   Output:
   Pair with sum 7 exists: Yes
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool twoSum(vector<int>& arr, int target) {
    sort( arr.begin() ,arr.end());
        int i=0,j=arr.size()-1;
        while( i<j ){
            int sum = arr[i]+arr[j];
            if( sum<target ){
                i++;
            }
            else if( sum>target ){
                j--;
            }
            else{
                return true;
            }
            
        }
        return false;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    if (twoSum(arr, target)) {
        cout << "Pair with sum " << target << " exists: Yes" << endl;
    } else {
        cout << "Pair with sum " << target << " exists: No" << endl;
    }

    return 0;
}
