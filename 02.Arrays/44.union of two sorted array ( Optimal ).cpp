// WAP to find the union of two sorted arrays and return the result as a single sorted array. OPTIMAL TC:O(n+m) SC:O(n)
//
// Example:
// Input: 
// a = [1, 2, 4, 5, 6]
// b = [2, 3, 5, 7]
// Output: 
// [1, 2, 3, 4, 5, 6, 7]
//
// Explanation: The union includes all unique elements from both sorted arrays.

#include <iostream>
#include <vector>
using namespace std;

// Function to find the union of two sorted arrays
vector<int> findUnion(vector<int>& a, vector<int>& b) {
    vector<int> ans;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (ans.empty() || ans.back() != a[i]) ans.push_back(a[i]);
            i++;
        } 
        else if (a[i] == b[j]) {
            if (ans.empty() || ans.back() != a[i]) ans.push_back(a[i]);
            i++;
            j++;
        } 
        else { // a[i] > b[j]
            if (ans.empty() || ans.back() != b[j]) ans.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        if (ans.empty() || ans.back() != a[i]) ans.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        if (ans.empty() || ans.back() != b[j]) ans.push_back(b[j]);
        j++;
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

    vector<int> result = findUnion(a, b);

    cout << "Union of arrays: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
