#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int k) {
        int n = nums.size();
        
        // Initialize the search boundaries
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If the middle element is the target, return its index
            if (nums[mid] == k) {
                return mid;
            }
            
            // If the left half is sorted
            if (nums[low] <= nums[mid]) {
                // Check if target is in the sorted left half
                if (nums[low] <= k && k <= nums[mid]) {
                    // Search in left half
                    high = mid - 1;
                }
                else {
                    // Search in right half
                    low = mid + 1;
                }
            }
            // If the right half is sorted
            else {
                // Check if target is in the sorted right half
                if (nums[mid] <= k && k <= nums[high]) {
                    // Search in right half
                    low = mid + 1;
                }
                else {
                    // Search in left half
                    high = mid - 1;
                }
            }
        }
        
        // Target not found
        return -1;
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
    cout << sol.search(nums, k) << "\n";

    return 0;
}