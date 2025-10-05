// WAP to find the second largest and second smallest element in a given array. OPTIMAL O(n)
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
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;

pair<int,int> smallest_largest( vector<int>&a ){
    int mini = a[0] , maxi = a[0] ;
    int s_min = INT_MAX;
    int s_max = INT_MIN;
    for( int i = 0 ; i < a.size() ; i++ ){
        if( a[i] > maxi ){
            s_max = maxi;
            maxi = a[i];
        }
        else if( a[i] < maxi && a[i] > s_max ){
            s_max = a[i];
        }
        
        if( a[i] < mini ){
            s_min = mini;
            mini = a[i];
        }
        else if( a[i] > mini && a[i] < s_min ){
            s_min = a[i];
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
