#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    long long calculateTotalHours(vector<int> &nums, int hour) {
        // Initialize the total hours needed to eat all bananas
        long long total_hours = 0;

        // Iterate through all piles of bananas
        for (int i = 0; i < nums.size(); i++) {
            /* Calculate hours needed for current pile and add to total We use ceiling 
               division because Koko must finish each pile before moving to the next */
            total_hours += ceil((double) (nums[i]) / (double) (hour));
        }

        // Return the total hours required to eat all bananas at the given rate
        return total_hours;
    }
public:
    int minimumRateToEatBananas(vector<int> &nums, int h) {
        // Get the size of the array
        int n = nums.size();

        // Find the maximum number of bananas in any pile
        int maximum_element = *(max_element(nums.begin(), nums.end()));
        
        // Binary search range: minimum possible rate is 1, maximum is largest pile
        int low = 1;
        int high = maximum_element;

        // Binary search for the minimum eating rate
        while (low <= high) {
            // Calculate middle point to avoid overflow
            int mid = low + (high - low) / 2;
            
            // Calculate how many hours it takes to eat all bananas at this rate
            long long totalHours = calculateTotalHours(nums, mid);

            /* If we can finish eating at this rate within h hours try a smaller rate to find the
               minimum possible */
            if (totalHours <= h) {
                high = mid - 1;
            }
            // If we can't finish in time, we need a faster rate
            else {
                low = mid + 1;
            }
        }

        // 'low' will be the minimum eating rate that allows finishing in h hours
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

    int h;
    cin >> h;

    Solution sol;
    cout << sol.minimumRateToEatBananas(nums, h) << "\n";

    return 0;
}