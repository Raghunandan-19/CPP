#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Function to swap elements if the element in nums1 is greater than the element in nums2
    void swapIfGreater(vector<int> &nums1, vector<int> &nums2, int ind1, int ind2) {
        if (nums1[ind1] > nums2[ind2]) {
            swap(nums1[ind1], nums2[ind2]);
        }
    }

public:
    // Function to merge two sorted arrays without extra space
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        // Using the gap method to sort the arrays
        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                // If left is in nums1 and right is in nums2
                if (left < m && right >= m) {
                    swapIfGreater(nums1, nums2, left, right - m);
                }
                // If both left and right are in nums2
                else if (left >= m) {
                    swapIfGreater(nums2, nums2, left - m, right - m);
                }
                // If both left and right are in nums1
                else {
                    swapIfGreater(nums1, nums1, left, right);
                }
                left++;
                right++;
            }

            // Reduce the gap for the next iteration
            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // Copy the elements of nums2 to nums1
        for (int i = m; i < (m + n); i++) {
            nums1[i] = nums2[i - m];
        }
    }
};

int main() {
    int n, m;
    cin >> m >> n;
    vector<int> nums1(m + n), nums2;

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        nums1[i] = num;
    }
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums2.push_back(num);
    }

    Solution sol;
    sol.merge(nums1, m, nums2, n);
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
