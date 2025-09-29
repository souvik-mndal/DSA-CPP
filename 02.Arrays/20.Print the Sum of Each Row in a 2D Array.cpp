// WAP to calculate the sum of each row in a given matrix.
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
// Row sums: 6 15

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> rowSums(const vector<vector<int>>& arr) {
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = 0; j < arr[0].size(); j++) {
            sum += arr[i][j];
        }
        ans.push_back(sum);
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

    vector<int> sums = rowSums(matrix);
    cout << "Row sums: ";
    for (int i = 0; i < sums.size(); i++) {
        cout << sums[i] << " ";
    }
    cout << endl;

    return 0;
}
