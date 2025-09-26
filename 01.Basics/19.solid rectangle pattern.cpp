// WAP to read length and breadth and print a solid rectangle pattern of '*'.

/*
n = 3 , m = 5

* * * * *
* * * * *
* * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter length and breadth of rectangle: ";
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
