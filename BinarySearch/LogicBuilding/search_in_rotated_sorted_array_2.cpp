#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
        int n = nums.size();

        // search space for binary search
        int low = 0;
        int high = n - 1;

        // Binary search loop
        while  (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if mid is the target
            if (nums[mid] == k) {
                return true;
            }

            // If duplicates at the ends, shrink the window
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }

            // Left half is sorted
            if (nums[low] <= nums[mid]) {
                // Target is in the left half
                if (nums[low] <= k && k <= nums[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            // Right half is sorted
            else {
                // Target is in the right half
                if (nums[mid] <= k && k <= nums[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        // Target not found
        return false;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int k;
    cin >> k;

    Solution sol;
    if (sol.searchInARotatedSortedArrayII(nums, k)) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}