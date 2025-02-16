#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2) {
        // union vector to store union
        vector<int> Union;
        // size of vector 1
        int n1 = nums1.size();
        // size of vector 2
        int n2 = nums2.size();
        // i and j to traverse vectors
        int i = 0;
        int j = 0;

        // iterating through both vectors simultaneously
        while (i < n1 && j < n2) {
            /* if current element of vector 1 is less than current element
            of vector 2 */
            if (nums1[i] <= nums2[j]) {
                /* if union vector is empty or last element of union vector
                is not equal to current element of vector 1 */
                if (Union.empty() || Union.back() != nums1[i]) {
                    // adding current element of vector 1 to union vector
                    Union.push_back(nums1[i]);
                }
                // incrementing i by 1
                i++;
            }
            else {
                /* if union vector is empty or last element of union vector
                is not equal to current element of vector 2 */
                if (Union.empty() || Union.back() != nums2[j]) {
                    // adding current element of vector 2 to union vector
                    Union.push_back(nums2[j]);
                }
                // incrementing j by 1
                j++;
            }
        }

        // if elements are present in vector 1
        while (i < n1) {
            /* if union vector is empty or last element of union vector is not 
            equal to current element of vector 1 */
            if (Union.empty() || Union.back() != nums1[i]) {
                Union.push_back(nums1[i]);
            }
            // incrementing i by 1
            i++;
        }

        // if elements are present in vector 2
        while (j < n2) {
            /* if union vector is empty or last element of union vector is not 
            equal to current element of vector 2 */
            if (Union.empty() || Union.back() != nums2[j]) {
                Union.push_back(nums2[j]);
            }
            // incrementing j by 1
            j++;
        }

        // returning the union of two sorted arrays
        return Union;
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1, nums2;

    for (int i = 0; i < n1; i++) {
        int num1;
        cin >> num1;
        nums1.push_back(num1);
    }

    for (int i = 0; i < n2; i++) {
        int num2;
        cin >> num2;
        nums2.push_back(num2);
    }

    Solution sol;
    for (auto num : sol.unionArray(nums1, nums2)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}