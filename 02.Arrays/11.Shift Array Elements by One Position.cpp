// WAP to shift array elements to the right by one position.
//
// Example:
// Input:
// Enter number of elements: 5
// Enter elements: 1 2 3 4 5
//
// Output:
// Shifted array: 5 1 2 3 4

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> shiftRight(const vector<int>& arr) {
    vector<int> ans;
    ans.push_back(arr[arr.size() - 1]); // last element goes to front
    for (int i = 0; i < arr.size() - 1; i++) {
        ans.push_back(arr[i]);
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

    vector<int> shifted = shiftRight(arr);

    cout << "Shifted array: ";
    for (int x : shifted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
