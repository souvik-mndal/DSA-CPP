// WAP to calculate the sum of positive and negative numbers in an array.

// Example:
// Input:
// Enter number of elements: 5
// Enter elements: 3 -2 5 -1 4

// Output:
// Sum of positive numbers: 12
// Sum of negative numbers: -3

#include <iostream>
#include <vector>
using namespace std;
 
pair<int, int> sumPositiveNegative(const vector<int>& arr) {
    int pos = 0, neg = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            pos += arr[i];
        } else {
            neg += arr[i];
        }
    }
    return {pos, neg};
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

    pair<int, int> result = sumPositiveNegative(arr);
    cout << "Sum of positive numbers: " << result.first << endl;
    cout << "Sum of negative numbers: " << result.second << endl;

    return 0;
}
