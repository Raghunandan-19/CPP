#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged(n + m);
        int left = 0;
        int right = 0;
        int index = 0;

        while (left < m && right < n) {
            if (nums1[left] <= nums2[right]) {
                merged[index++] = nums1[left++];
            } else {
                merged[index++] = nums2[right++];
            }
        }

        while (left < m) {
            merged[index++] = nums1[left++];
        }

        while (right < n) {
            merged[index++] = nums2[right++];
        }

        for (int i = 0; i < (m + n); i++) {
            nums1[i] = merged[i];
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
