// WAP to add two numbers represented as arrays of digits in reverse order.
//
// Example:
// Input:
// nums1 = [2, 4, 3]  (represents 342)
// nums2 = [5, 6, 4]  (represents 465)
//
// Output:
// [7, 0, 8] (represents 807)

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> addTwoNumbers(const vector<int>& nums1, const vector<int>& nums2) {
    int i = 0, j = 0;
    int n1 = nums1.size(), n2 = nums2.size();
    int carry = 0;
    vector<int> ans;

    while (i < n1 || j < n2 || carry) {
        int sum = carry;
        if (i < n1) sum += nums1[i++];
        if (j < n2) sum += nums2[j++];
        ans.push_back(sum % 10);
        carry = sum / 10;
    }

    return ans;
}

int main() {
    int n1, n2;
    cout << "Enter size of first number: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter digits of first number in reverse order: ";
    for (int i = 0; i < n1; i++) cin >> nums1[i];

    cout << "Enter size of second number: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter digits of second number in reverse order: ";
    for (int i = 0; i < n2; i++) cin >> nums2[i];

    vector<int> result = addTwoNumbers(nums1, nums2);
    cout << "Sum: ";
    for (int d : result) cout << d << " ";
    cout << endl;

    return 0;
}
