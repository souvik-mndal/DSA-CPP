// WAP to print the extreme elements of an array alternately after sorting.
//
// Example:
// Input:
// Enter number of elements: 6
// Enter elements: 4 1 6 2 5 3
//
// Output:
// 1 6 2 5 3 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
vector<int> printExtremeElementsAlternately(vector<int>& arr) {
    sort(arr.begin(), arr.end());  // Sort the array

    int i = 0, j = arr.size() - 1;
    vector<int> ans;

    while (i <= j) {
        if (i == j) {
            ans.push_back(arr[i]);  // middle element if odd number of elements
        } else {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
        }
        i++;
        j--;
    }
    return ans;
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

    vector<int> result = printExtremeElementsAlternately(arr);

    cout << "Extreme elements alternately: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
