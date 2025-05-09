#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int x) {
        // Get the size of the input vector
        int n = nums.size(); 

        // Initialize the lower bound and upper bound of the search range
        int low = 0; 
        int high = n - 1; 

        // Default answer is set to the size of the array (insert at the end)
        int ans = n; 

        // Perform binary search
        while (low <= high) {
            // Calculate the middle index to avoid overflow
            int mid = low + (high - low) / 2; 

            // If the middle element is greater than or equal to x
            if (nums[mid] >= x) { 
                // Update the answer to the current mid index
                ans = mid; 
                high = mid - 1; // Narrow the search range to the left half
            }
            // If the middle element is less than x
            else { 
                // Narrow the search range to the right half
                low = mid + 1; 
            }
        }

        // Return the position where x should be inserted
        return ans; 
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

    int x;
    cin >> x;

    Solution sol;
    cout << sol.searchInsert(nums, x) << "\n";

    return 0;
}