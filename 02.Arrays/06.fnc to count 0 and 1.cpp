//WAP to count 0 and 1 in a binary number.
#include <iostream>
using namespace std;
void countZeroOne( int arr[], int size ){
    int countZero = 0, countOne = 0;
    for( int i = 0; i < size; i++ ){
        if( arr[i] == 0 )
            countZero++;
        else if( arr[i] == 1 )
            countOne++;
    }
    cout << "Number of 0's: " << countZero << endl;
    cout << "Number of 1's: " << countOne << endl;
}

int main() {
    int size;
    cout << "Enter the size of the binary number: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the binary number (0s and 1s only): ";
    for( int i = 0; i < size; i++ ){
        cin >> arr[i];
        if( arr[i] != 0 && arr[i] != 1 ){
            cout << "Invalid input! Please enter only 0s and 1s." << endl;
            return 1; // Exit with an error code
        }
    }
    
    countZeroOne(arr, size);
    
    return 0;
}