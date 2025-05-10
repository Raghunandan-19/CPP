#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    int firstOccurence(vector<int> &nums, int x) {
        int n = nums.size();

        // Initialize left and right boundary
        int low = 0;
        int high = n - 1;

        // Initialize answer as not found
        int ans = -1;

        while (low <= high) {
            // Calculate middle index (prevents overflow)
            int mid = low + (high - low) / 2;  

            if (nums[mid] == x) {
                // Found a match, store this position
                ans = mid;

                // Look in left half for earlier occurrence
                high = mid - 1;
            }
            // Target is in right half
            else if (nums[mid] < x) {
                low = mid + 1;
            }
            // Target is in left half
            else {
                high = mid - 1;
            }
        }

        // Return the first occurrence index or -1 if not found
        return ans;
    }

    int lastOccurrence(vector<int> &nums, int x) {
        int n = nums.size();

        // Initialize left and right boundaries
        int low = 0;
        int high = n - 1;
        
        // Initialize answer as not found
        int ans = -1;

        while (low <= high) {
            // Calculate middle index (prevents overflow)
            int mid = low + (high  - low) / 2;

            if (nums[mid] == x) {
                // Found a match, store this position
                ans = mid;
                // Look in right half for later occurrence
                low = mid + 1;
            }
            // Target is in right half
            else if (nums[mid] < x) {
                low = mid + 1;
            }
            // Target is in left half
            else {
                high = mid - 1;
            }
        }

        // Return the last occurrence index or -1 if not found
        return ans;
    }
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        return {firstOccurence(nums, target), lastOccurrence(nums, target)};
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

    int target;
    cin >> target;

    Solution sol;
    for (auto &num : sol.searchRange(nums, target)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}