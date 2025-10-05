// WAP to find the largest element in a given array. OPTIMAL O(n)
//
// Example:
// Input:
// 5
// 3 7 2 9 4
//
// Output:
// The largest element is: 9

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the largest element in an array
int largest(vector<int>& arr) {
    int maxi = arr[0];
        for( int i=1 ; i<arr.size() ; i++ ){
            maxi = max( maxi , arr[i] );
        }
        return maxi;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The largest element is: " << largest(arr) << endl;

    return 0;
}
