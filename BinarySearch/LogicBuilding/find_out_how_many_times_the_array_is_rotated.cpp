#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n = nums.size();

        // search space for binary search
        int low = 0;
        int high = n - 1;

        // To store the index of the minimum element
        int idx = -1; 

        // Initialize minimum element to a very large value
        int minimum_element = INT_MAX; 

        while (low <= high) {
            // Calculate mid to avoid overflow
            int mid = low + (high - low) / 2; 

            // If the subarray is already sorted
            if (nums[low] <= nums[high]) {
                if (nums[low] < minimum_element) {
                    // Update minimum element
                    minimum_element = min(nums[low], minimum_element); 
                    
                    // Update index of the minimum element
                    idx = low; 
                }

                // Exit the loop as the minimum is found
                break; 
            }

            // If the left half is sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] < minimum_element) {
                    // Update minimum element
                    minimum_element = min(nums[low], minimum_element);
                    
                    // Update index of the minimum element
                    idx = low; 
                }

                // Move to the right half
                low = mid + 1; 
            }
            // If the right half is sorted
            else {
                if (nums[mid] < minimum_element) {
                    // Update minimum element
                    minimum_element = min(nums[mid], minimum_element); 
                    
                    // Update index of the minimum element
                    idx = mid; 
                }

                // Move to the left half
                high = mid - 1; 
            }
        }

        // Return the index of the minimum element
        return idx;
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

    Solution sol;
    cout << sol.findKRotation(nums) << "\n";

    return 0;
}