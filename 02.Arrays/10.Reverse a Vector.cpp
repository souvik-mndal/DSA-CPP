// WAP to reverse an array.
//
// Example:
// Input:
// Enter number of elements: 5
// Enter elements: 1 2 3 4 5
//
// Output:
// Reversed array: 5 4 3 2 1

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> reverseArray(const vector<int>& arr) {
    vector<int> ans = arr;
    int i = 0, j = ans.size() - 1;

    while (i < j) {
        swap(ans[i++], ans[j--]);
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

    vector<int> reversed = reverseArray(arr);

    cout << "Reversed array: ";
    for (int x : reversed) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
