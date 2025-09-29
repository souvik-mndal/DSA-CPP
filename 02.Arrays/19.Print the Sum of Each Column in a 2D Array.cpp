// WAP to calculate the sum of each column in a given matrix.
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
// Column sums: 5 7 9

#include <iostream>
#include <vector>
using namespace std;

vector<int> columnSums(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> ans(cols, 0);

    for (int i = 0; i < cols; i++) {
        int sum = 0;
        for (int j = 0; j < rows; j++) {
            sum += matrix[j][i];
        }
        ans[i] = sum;
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

    vector<int> sums = columnSums(matrix);
    cout << "Column sums: ";
    for (int i = 0; i < sums.size(); i++) {
        cout << sums[i] << " ";
    }
    cout << endl;

    return 0;
}
