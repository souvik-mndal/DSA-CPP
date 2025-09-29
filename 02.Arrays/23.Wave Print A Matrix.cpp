// WAP to print the elements of a matrix in a wave form column-wise.
//
// Example:
// Input:
// 1 2 3
// 4 5 6
// 7 8 9
//
// Output:
// 1 4 7 8 5 2 3 6 9

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrintMatrix(const vector<vector<int>>& matrix, int m, int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Traverse top to bottom
            for (int j = 0; j < m; j++) {
                ans.push_back(matrix[j][i]);
            }
        } else {
            // Traverse bottom to top
            for (int j = m - 1; j >= 0; j--) {
                ans.push_back(matrix[j][i]);
            }
        }
    }
    return ans;
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    vector<int> result = wavePrintMatrix(matrix, m, n);

    cout << "Wave Print: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
