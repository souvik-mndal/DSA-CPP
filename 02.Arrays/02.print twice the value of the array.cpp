//WAP to print twice  the value of the array.

// input : 1 2 3 4 5 6 7 8 9 10
//output : 2 4 6 8 10 12 14 16 18 20

#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for( int i = 0 ; i < 10 ; i++ ){
        cout << "Enter the element for index "<<i+1<<" : ";
        cin >> arr[i];
    }

    cout << "The values are : ";
    
    for( int i = 0 ; i < 10 ; i++ ){
        cout << arr[i] << " ";
    }
    
    cout << endl << "The twice of the values are : ";
    
    for( int i = 0 ; i < 10 ; i++ ){
        cout << arr[i] * 2 << " ";
    }
}