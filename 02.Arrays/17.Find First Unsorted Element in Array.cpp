// WAP to find the first index in an array where the next element is smaller (first unsorted index).

// Example:
// Input:
// Enter number of elements: 6
// Enter elements: 1 3 5 4 6 7

// Output:
// First unsorted index: 2

#include <iostream>
#include <vector>
using namespace std;
 
int findFirstUnsortedIndex(const vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return i;
        }
    }
    return -1; 
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

    int index = findFirstUnsortedIndex(arr);
    if (index != -1)
        cout << "First unsorted index: " << index << endl;
    else
        cout << "The array is fully sorted." << endl;

    return 0;
}
