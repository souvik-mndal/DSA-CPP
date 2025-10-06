// WAP to find the intersection of two sorted arrays (without duplicates). OPTIMAL TC:O(n+m) SC:O(n)
// The intersection should only include elements that appear in both arrays.
//
// Example:
// Input:
// arr1 = [1, 2, 2, 3, 4]
// arr2 = [2, 2, 4, 6]
// Output:
// [2, 4]
//
// Explanation: 2 and 4 are common elements in both arrays.

#include <iostream>
#include <vector>
using namespace std;

// Function to find intersection of two sorted arrays
vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            i++;
        } 
        else if (arr1[i] > arr2[j]) {
            j++;
        } 
        else {
            if (ans.empty() || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int m;
    cout << "Enter the number of elements: ";
    cin >> m;

    vector<int> b(m);
    cout << "Enter the elements: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> result = intersection(a , b);

    cout << "Intersection of arrays: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
