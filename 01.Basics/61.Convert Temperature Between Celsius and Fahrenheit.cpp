// WAP to convert temperature between Celsius and Fahrenheit.
// Conversion formulas:
// Celsius to Fahrenheit (CtoF): F = (C * 9/5) + 32
// Fahrenheit to Celsius (FtoC): C = (F - 32) * 5/9

// Example 1:
// Input: 100, CtoF
// Output: 212

// Example 2:
// Input: 32, FtoC
// Output: 0

#include <iostream>
#include <string>
using namespace std;
 
double convertTemperature(double temp, string conversionType) {
    if (conversionType == "CtoF") {
        return (temp * 9.0 / 5.0) + 32;
    } 
    else if (conversionType == "FtoC") {
        return (temp - 32) * 5.0 / 9.0;
    } 
    else {
        cout << "Invalid conversion type!" << endl;
        return 0;
    }
}

int main() {
    double temp;
    string type;

    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Enter conversion type (CtoF or FtoC): ";
    cin >> type;

    double result = convertTemperature(temp, type);
    cout << "Converted temperature: " << result << endl;

    return 0;
}
