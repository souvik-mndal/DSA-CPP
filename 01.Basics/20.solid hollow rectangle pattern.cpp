// WAP to read length and breadth and print a hollow rectangle pattern of '*'.

/*
n = 3 , m = 5

* * * * *
*       *
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
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
