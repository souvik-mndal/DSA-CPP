//WAP to make a char array of size 10 and take input and print that.

#include<iostream>
using namespace std;
int main(){
    char ch[10];
    for( int i = 0 ; i < 10 ; i++ ){
        cout << "Enter the element for index "<<i+1<<" : ";
        cin >> ch[i];
    }

    cout<<"The values are : ";
    
    for( int i = 0 ; i < 10 ; i++ ){
        cout << ch[i] << " ";
    }
}