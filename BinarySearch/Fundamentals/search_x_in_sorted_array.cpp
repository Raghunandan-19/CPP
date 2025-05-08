#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        // Get the size of the array
        int n = nums.size();
        // Initialize the low and high pointers for binary search
        int low = 0;
        int high = n - 1;

        // Perform binary search
        while (low <= high) {
            // Calculate the middle index
            int mid = (low + high) / 2;

            // Check if the middle element is the target
            if (nums[mid] == target) {
                return mid; // Target found, return its index
            } 
            // If the middle element is less than the target, search in the right half
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            // If the middle element is greater than the target, search in the left half
            else {
                high = mid - 1;
            }
        }

        // If the target is not found, return -1
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

    int target;
    cin >> target;

    Solution sol;
    cout << sol.search(nums, target) << "\n";

    return 0;
}