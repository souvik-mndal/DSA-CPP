// WAP to compute the transpose of a given matrix.
//
// Example:
// Input:
// Enter number of rows: 2
// Enter number of columns: 3
// Enter elements:
// 1 2 3
// 4 5 6
//
// Output:
// Transposed matrix:
// 1 4
// 2 5
// 3 6

#include <iostream>
#include <vector>
using namespace std;
 
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> ans(cols, vector<int>(rows, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> result = transposeMatrix(matrix);
    cout << "Transposed matrix:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
