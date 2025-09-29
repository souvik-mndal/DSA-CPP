// WAP to multiply each element of an array by 10.

// Example:
// Input:
// Enter number of elements: 5
// Enter elements: 1 2 3 4 5
// Output:
// Resultant array: 10 20 30 40 50

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> multiplyByTen(const vector<int>& arr) {
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        ans.push_back(arr[i] * 10);
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

    vector<int> result = multiplyByTen(arr);

    cout << "Resultant array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
