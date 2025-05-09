#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int getFloor(vector<int> nums, int x) {
        // Size of the input array
        int n = nums.size();

        // Initialize binary search boundaries
        int low = 0;
        int high = n - 1;

        // Variable to store the floor value, initialized to -1 (not found)
        int ans = -1;

        // Binary search to find the floor value
        while (low <= high) {
            // Calculate middle index to avoid integer overflow
            int mid = low + (high - low) / 2;

            /* If current element is less than or equal to x
               it could be a potential floor value */
            if (nums[mid] <= x) {
                // Update the current best floor
                ans = nums[mid];   
                
                // Search in the right half for potentially larger floor
                low = mid + 1;       
            }
            // If current element is greater than x
            else {
                // search in the left half
                high = mid - 1;
            }
        }

        // Return the floor value (-1 if no floor exists)
        return ans;
    }

    int getCeil(vector<int> nums, int x) {
        // Size of the input array
        int n = nums.size();
        
        // Initialize binary search boundaries
        int low = 0;
        int high = n - 1;
        
        // Variable to store the ceil value, initialized to -1 (not found)
        int ans = -1;

        // Binary search to find the ceil value
        while (low <= high) {
            // Calculate middle index to avoid integer overflow
            int mid = low + (high - low) / 2;

            /* If current element is greater than or equal to x
               it could be a potential ceil value */
            if (nums[mid] >= x) {
                // Update the current best ceil
                ans = nums[mid];
                
                // Search in the left half for potentially smaller ceil
                high = mid - 1;
            }
            // If current element is less than x
            else {
                // Search in the right half
                low = mid + 1;
            }
        }

        // Return the ceil value (-1 if no ceil exists)
        return ans;
    }
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        // Get the floor value (largest element ≤ x)
        int floor = getFloor(nums, x);

        // Get the ceil value (smallest element ≥ x)
        int ceil = getCeil(nums, x);

        // Return both values as a vector {floor, ceil}
        return {floor, ceil};
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
    for (auto &num : sol.getFloorAndCeil(nums, x)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}