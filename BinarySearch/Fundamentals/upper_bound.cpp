#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int upperBound(vector<int> &nums, int x) {
        // Get the size of the vector
        int n = nums.size(); 

        // Initialize the lower bound and upper bound of the search range
        int low = 0;         
        int high = n - 1;   
        
        // Default answer is n (out of bounds)
        int ans = n;         

        // Perform binary search
        while (low <= high) {
            // Calculate the middle index to avoid overflow
            int mid = low + (high - low) / 2; 

            // If the middle element is greater than x, update the answer and search in the left half
            if (nums[mid] > x) {
                // Update the answer to the current index
                ans = mid;    

                // Move the upper bound to the left
                high = mid - 1; 
            }
            // Otherwise, search in the right half
            else {
                // Move the lower bound to the right
                low = mid + 1; 
            }
        }

        // Return the index of the first element greater than x
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
    cout << sol.upperBound(nums, x) << "\n";

    return 0;
}