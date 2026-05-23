//WAP to print odd or even
#include<iostream>
using namespace std;
void printOddEven( int arr[] , int size ){
    cout << "The odd and even numbers are : " << endl;
    for( int i = 0 ; i < size ; i++ ){
        if( arr[i] % 2 == 0 ){
            cout << arr[i] << " is even number." << endl;
        }
        else{
            cout << arr[i] << " is odd number." << endl;
        }
    }
}
int main(){
    int n;
    cout << "Give the size of the array : " << endl;
    cin >> n;

    int arr[n];
    cout << "Give the elements of the array : ";
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    printOddEven( arr , n );
}