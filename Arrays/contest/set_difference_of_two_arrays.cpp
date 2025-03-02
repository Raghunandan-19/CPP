#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> setDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i = 0, j = 0;
        int n1 = nums1.size(), n2 = nums2.size();

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++;
            } 
            else if (nums1[i] > nums2[j]) {
                if (result.empty() || result.back() != nums2[j]) {
                    result.push_back(nums2[j]);
                }
                j++;
            } 
            else {
                int current = nums1[i];
                while (i < n1 && nums1[i] == current) i++;
                while (j < n2 && nums2[j] == current) j++;
            }
        }

        while (i < n1) {
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
        }

        while (j < n2) {
            if (result.empty() || result.back() != nums2[j]) {
                result.push_back(nums2[j]);
            }
            j++;
        }

        return result;
    }
};

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> nums1(n1);

    for (int i = 0; i < n1; ++i) {
        cin >> nums1[i];
    }

    cin >> n2;
    vector<int> nums2(n2);
    
    for (int i = 0; i < n2; ++i) {
        cin >> nums2[i];
    }

    Solution sol;
    vector<int> result = sol.setDifference(nums1, nums2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}