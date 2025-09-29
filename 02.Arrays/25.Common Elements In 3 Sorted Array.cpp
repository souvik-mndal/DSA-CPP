// WAP to find common elements in three sorted arrays
//
// Example:
// Input: 
// array1 = {1, 5, 10, 20, 40, 80}
// array2 = {6, 7, 20, 80, 100}
// array3 = {3, 4, 15, 20, 30, 70, 80, 120}
//
// Output: 20 80

#include <iostream>
#include <vector>
using namespace std;

// Function to find common elements in 3 sorted arrays
vector<int> commonElements(vector<int>& array1, vector<int>& array2, vector<int>& array3) {
    int i = 0, j = 0, k = 0;
    int s1 = array1.size(), s2 = array2.size(), s3 = array3.size();
    vector<int> ans;

    while (i < s1 && j < s2 && k < s3) {
        if (array1[i] == array2[j] && array2[j] == array3[k]) {
            if (ans.empty() || ans.back() != array1[i]) // avoid duplicates
                ans.push_back(array1[i]);
            i++; j++; k++;
        }
        else if (array1[i] < array2[j]) {
            i++;
        }
        else if (array2[j] < array3[k]) {
            j++;
        }
        else {
            k++;
        }
    }
    return ans;
}

int main() {
    int n1, n2, n3;

    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> array1(n1);
    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n1; i++) cin >> array1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> array2(n2);
    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < n2; i++) cin >> array2[i];

    cout << "Enter size of third array: ";
    cin >> n3;
    vector<int> array3(n3);
    cout << "Enter elements of third sorted array: ";
    for (int i = 0; i < n3; i++) cin >> array3[i];

    vector<int> result = commonElements(array1, array2, array3);

    cout << "Common elements are: ";
    if (result.empty()) {
        cout << "None";
    } else {
        for (int x : result) {
            cout << x << " ";
        }
    }
    cout << endl;

    return 0;
}
