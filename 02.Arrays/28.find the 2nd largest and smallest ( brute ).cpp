// WAP to find the second largest and second smallest element in a given array. BRUTE O(nlogn)*O(2n)
//
 // Example:
// Input:
// 5
// 3 7 2 9 4
//
// Output:
// The second smallest element is: 3
// The second largest element is: 7

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int,int> smallest_largest( vector<int>&a ){
    sort( a.begin() , a.end() );
    int s_min = a[0];
    int s_max = a[a.size() - 1];
    for( int i = 1 ; i < a.size() ; i++ ){
        if( a[i] > s_min ){
            s_min = a[i];
            break;
        }
    }
    for( int i = a.size() - 1 ; i >= 0 ; i-- ){
        if( a[i] < s_max ){
            s_max = a[i];
            break;
        }
    }
    return {s_min , s_max};
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
    pair<int,int>ans = smallest_largest( arr );
    cout << "The second smallest element is: " << ans.first << endl;
    cout << "The second largest element is: " << ans.second << endl;

    return 0;
}
