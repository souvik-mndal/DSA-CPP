// WAP to print the elements of a matrix in spiral order.
//
// Example:
// Input:
// 1 2 3
// 4 5 6
// 7 8 9
//
// Output:
// 1 2 3 6 9 8 7 4 5

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    int row = matrix.size();
    if (row == 0) return {};
    int col = matrix[0].size();
    int total = row * col;
    int count = 0;

    int sr = 0, sc = 0, er = row - 1, ec = col - 1;
    vector<int> ans;

    while (count < total) {
        // Traverse top row
        for (int i = sc; i <= ec && count < total; i++) {
            ans.push_back(matrix[sr][i]);
            count++;
        }
        sr++;

        // Traverse right column
        for (int i = sr; i <= er && count < total; i++) {
            ans.push_back(matrix[i][ec]);
            count++;
        }
        ec--;

        // Traverse bottom row
        for (int i = ec; i >= sc && count < total; i--) {
            ans.push_back(matrix[er][i]);
            count++;
        }
        er--;

        // Traverse left column
        for (int i = er; i >= sr && count < total; i--) {
            ans.push_back(matrix[i][sc]);
            count++;
        }
        sc++;
    }

    return ans;
}

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> matrix[i][j];

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
