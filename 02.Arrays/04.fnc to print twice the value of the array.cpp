//WAP to print twice the value of the array
#include<iostream>
using namespace std;

void printTwice( int arr[] , int size ){
    cout << "Printing the twice of the value : ";
    for( int i = 0 ; i < size ; i++ ){
        cout << 2 * arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Give the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Give the elements of the array : ";
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    printTwice( arr , n );
}