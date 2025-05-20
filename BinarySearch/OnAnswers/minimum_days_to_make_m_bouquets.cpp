#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool possible(vector<int> nums, int day, int k, int m) {
        // Counter for consecutive flowers that have bloomed
        int cnt = 0;
        
        // Counter for total bouquets that can be made
        int no_of_bouquets = 0;

        // Iterate through all flowers
        for (int i = 0; i < nums.size(); i++) {
            // If the flower can bloom by the given day
            if (nums[i] <= day) {
                // Increment consecutive flower count
                cnt++;
            }
            else {
                /* If the sequence breaks, calculate how many bouquets can be made
                   with the current consecutive flowers and add to total */
                no_of_bouquets += (cnt / k);

                // Reset consecutive counter
                cnt = 0;
            }
        }

        /* Add bouquets from the last consecutive sequence
          (in case the array ends with bloomable flowers) */
        no_of_bouquets += (cnt / k);

        // Return true if we can make at least m bouquets, false otherwise
        return (no_of_bouquets >= m);
    }
public:
    int roseGarden(vector<int> nums, int k, int m) {
        // Get the size of the array
        int n = nums.size();

        // Check if we have enough flowers to make m bouquets with k flowers each
        // If not, return -1 immediately
        long long val = (k * 1ll) * (m * 1ll);
        if (val > n) return -1;

        // Find the minimum and maximum blooming day in the array
        // These will be our binary search boundaries
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        // Initialize binary search boundaries
        int low = mini;
        int high = maxi;

        // Initialze ans to store minimum days
        int ans = -1;

        // Binary search on the number of days
        while (low <= high) {
            // Calculate mid point to avoid overflow
            int mid = low + (high - low) / 2;
            
            // Check if it's possible to make m bouquets in 'mid' days
            if (possible(nums, mid, k, m)) {
                // If possible, record this as a potential answer
                ans = mid;

                // Try to find a better (smaller) answer
                high = mid - 1;               
            }
            else {
                // If not possible with 'mid' days, need more days
                low = mid + 1;
            }
        }

        // Return the minimum number of days needed or -1 if impossible
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

    int k;
    cin >> k;

    int m;
    cin >> m;

    Solution sol;
    cout << sol.roseGarden(nums, k, m) << "\n";

    return 0;
}