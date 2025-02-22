#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int> &nums1, vector<int> &nums2) {
        vector<int> intersection; // Vector to store the intersection elements
        int n1 = nums1.size(); // Size of the first array
        int n2 = nums2.size(); // Size of the second array
        int i = 0; // Pointer for the first array
        int j = 0; // Pointer for the second array

        // Traverse both arrays
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                i++; // Move the pointer of the first array forward
            }
            else if (nums1[i] > nums2[j]) {
                j++; // Move the pointer of the second array forward
            }
            else {
                intersection.push_back(nums1[i]); // Add the common element to the intersection vector
                i++; // Move both pointers forward
                j++;
            }
        }

        return intersection; // Return the intersection vector
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1, nums2;

    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        nums1.push_back(x);
    }

    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        nums2.push_back(x);
    }

    Solution sol;
    for (auto num : sol.intersectionArray(nums1, nums2)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}