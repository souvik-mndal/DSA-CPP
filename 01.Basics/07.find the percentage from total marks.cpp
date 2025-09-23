// WAP to read total marks and obtained marks of a student and print the percentage.

#include <iostream>
using namespace std;

int main() {
    int totalMarks, obtainedMarks;
    cout << "Enter total marks: ";
    cin >> totalMarks;
    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;

    double percentage = ((double)obtainedMarks / totalMarks) * 100;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
