//WAP to print "Odd" / "Even" according to the value.

// input : 1 2 3 4 5 6 7 8 9 10
//output : Odd Even Odd Even Odd Even Odd Even Odd Even 

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
        if( arr[i] & 1 ){
            cout << arr[i] << ":Odd ";
        }
        else{
            cout << arr[i] << ":Even ";
        }
    }
}