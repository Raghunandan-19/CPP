#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lowerBound(vector<int> &nums, int x) {
        // size of array
        int n = nums.size();

        // search space for binary search
        int low = 0;
        int high = n - 1;

        // initializing answer with n if search space gets exhausted
        int ans = n;

        // applying binary search
        while (low <= high) {
            // mid index of search space
            int mid = low + (high - low) / 2;

            // check if mid element is >= x 
            if (nums[mid] >= x) {
                // updating answer as mid
                ans =  mid;

                // eliminating the right half
                high = mid - 1;
            }
            // eliminating the left half
            else {
                low = mid + 1;
            }
        }

        // returning the index where lower bound of x is stored
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
    cout << sol.lowerBound(nums, x) << "\n";

    return 0;
}