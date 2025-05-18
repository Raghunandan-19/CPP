#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int sumByDivisor(vector<int> &nums, int divisor) {
        // Initialize sum to accumulate division results
        int sum = 0;

        // Iterate through all elements in the array
        for (int i = 0; i < nums.size(); i++) {
            /* For each element, divide by the divisor and round up to the nearest integer
               Cast to double to ensure accurate division and ceiling operation */
            sum += ceil((double) (nums[i]) / (double) (divisor));
        }

        // Return the total sum
        return sum;
    }
public:
    int smallestDivisor(vector<int> &nums, int limit) {
        // Find the size of the array
        int n = nums.size();

        /* Special case: if array size is greater than limit, it's impossible to 
        get a valid divisor since even with divisor=infinity, sum would be at least n */
        if (n > limit) {
            return -1;
        }

        // Find the maximum element in the array as it's the upper bound for divisor
        int maximum_element = *max_element(nums.begin(), nums.end());
        
        // Set search range: minimum divisor is 1, maximum is the largest element
        int low = 1;
        int high = maximum_element;

        // Binary search to find the smallest divisor
        while(low <= high) {
            // Calculate middle point to avoid overflow
            int mid = low + (high - low) / 2;
            
            // Check if current divisor satisfies the limit condition
            if (sumByDivisor(nums, mid) <= limit) {
                // If it does, look for a smaller divisor
                high = mid - 1;
            }
            else {
                // If it doesn't, we need a larger divisor
                low = mid + 1;
            }
        }

        // 'low' ends up as the smallest divisor that satisfies the condition
        return low;
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

    int limit;
    cin >> limit;

    Solution sol;
    cout << sol.smallestDivisor(nums, limit) << "\n";

    return 0;
}