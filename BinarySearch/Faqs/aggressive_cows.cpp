#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool canWePlace(vector<int> &nums, int distance, int cows) {
        int n = nums.size();

        // Start with 1 cow placed at the first stall
        int cnt_cows = 1;     
        
        // Position of the last placed cow
        int last_cow = nums[0]; 

        for (int i = 1; i < n; i++) {
            // If current stall is at least 'distance' away from the last placed cow
            if (nums[i] - last_cow >= distance) {
                // Place another cow at current stall
                cnt_cows++;       

                // Update the position of last placed cow
                last_cow = nums[i]; 
            }

            // If we've successfully placed all required cows, return true
            if (cnt_cows >= cows) return true;
        }

        // If we couldn't place all cows with given minimum distance
        return false;
    }
public:
    int aggressiveCows(vector<int> &nums, int k) {
        // Sort the array to ensure stalls are in increasing order
        sort(nums.begin(), nums.end());

        int n = nums.size();
        
        // Maximum possible distance between any two stalls
        int limit = nums[n - 1] - nums[0];

        // Binary search range: minimum distance is 1, maximum is the limit
        int low = 1;
        int high = limit;

        // Binary search to find the largest minimum distance
        while (low <= high) {
            int mid = low + (high - low) / 2; // Calculate mid to avoid overflow

            // Check if we can place k cows with minimum distance 'mid'
            if (canWePlace(nums, mid, k)) {
                // If possible, try for larger distance
                low = mid + 1;
            }
            else {
                // If not possible, reduce the distance
                high = mid - 1;
            }
        }

        // 'high' will contain the largest valid distance
        return high;
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

    Solution sol;
    cout << sol.aggressiveCows(nums, k) << "\n";

    return 0;
}