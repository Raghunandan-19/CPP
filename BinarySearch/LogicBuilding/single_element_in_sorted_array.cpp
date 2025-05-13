#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n = nums.size();

        // If there's only one element, return it
        if (n == 1) return nums[0];

        // Check if the first element is the single one
        if (nums[0] != nums[1]) return nums[0];

        // Check if the last element is the single one
        if (nums[n - 2] != nums[n - 1]) return nums[n - 1];

        // Only need to search between 1 and n-2
        int low = 1;
        int high = n - 2;

        while (low <= high) {
            // calculating mid to avoid overflow cases
            int mid = low + (high - low) / 2;

            // Check if nums[mid] is the single element
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // If mid is odd and nums[mid] == nums[mid-1], or
            // if mid is even and nums[mid] == nums[mid+1], the single element is to the right
            if (((mid % 2 == 1) && (nums[mid - 1] == nums[mid])) || ((mid % 2 == 0) && nums[mid] == nums[mid + 1])) {
                low = mid + 1;
            }
            // Otherwise, the single element is to the left
            else {
                high = mid - 1;
            }
        } 

        // If not found, return -1 (should not happen for valid input)
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

    Solution sol;
    cout << sol.singleNonDuplicate(nums) << "\n";

    return 0;
}