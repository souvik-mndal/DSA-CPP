// WAP to find the union of two sorted arrays and return the result as a single sorted array without duplicates. BRUTE TC:O(n+m)*O(logn)+O(n+m) SC:O(n)
//
// Example:+m
// Input:  
// a = [1, 2, 4, 5, 6]
// b = [2, 3, 5, 7]
// Output: 
// [1, 2, 3, 4, 5, 6, 7]
//
// Explanation: The union contains all unique elements from both arrays in sorted order.

#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to find the union of two arrays
vector<int> findUnion(vector<int>& a, vector<int>& b) {
    set<int> st;
    vector<int> ans;

    // Insert all elements of both arrays into a set (removes duplicates automatically)
    for (int i = 0; i < a.size(); i++) st.insert(a[i]);
    for (int i = 0; i < b.size(); i++) st.insert(b[i]);

    // Copy the elements from set to vector
    for (auto it : st) ans.push_back(it);

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
