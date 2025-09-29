// WAP to find the average of elements in an array.
// Formula: Average = (Sum of elements) / (Number of elements)

// Example:
// Input:
// Enter number of elements: 5
// Enter elements: 10 20 30 40 50
// Output:
// Average = 30

#include <iostream>
#include <vector>
using namespace std;
 
double findAverage(const vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return (double)sum / arr.size();
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

    cout << "Average = " << findAverage(arr) << endl;

    return 0;
}
