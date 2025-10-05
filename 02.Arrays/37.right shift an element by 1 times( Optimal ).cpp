// WAP to right rotate an array by one position (last element becomes the first). OPTIMAL TC:O(n)
//
// Example:
// Input:  1 2 3 4 5
// Output: 5 1 2 3 4 

#include <iostream>
#include <vector>
using namespace std;
 
void rightRotateOne(vector<int>& arr) {
    if (arr.empty()) return;             
    int end = arr[arr.size() - 1];        
    for (int i = arr.size() - 1 ; i > 0 ; i-- ) {
        arr[i] = arr[i - 1];   
    }
    arr[0] = end;        
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
    rightRotateOne(arr);

    cout << "After right rotation by one: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
