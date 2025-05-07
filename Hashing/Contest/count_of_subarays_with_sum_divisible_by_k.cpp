#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraySumDivisbleByK(vector<int> &nums, int k){
        int n = nums.size();
        unordered_map<int, int> mpp;

        // Initialize the map with 0 remainder having a count of 1
        mpp[0] = 1; 
        
        // To store the cumulative sum and the count of subarrays
        int prefix_sum = 0;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            // Update the prefix sum with the current element
            prefix_sum += nums[i]; 
            
            // Calculate the remainder of the prefix sum with k, ensuring it's non-negative
            int mod = ((prefix_sum % k) + k) % k;
        
            // If the remainder has been seen before, add its count to the result
            if (mpp.find(mod) != mpp.end()) {
                count += mpp[mod];
            }
        
            // Increment the count of the current remainder in the map
            mpp[mod]++;
        }
        
        return count; // Return the total count of subarrays
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
    cout << sol.subarraySumDivisbleByK(nums, k) << "\n";

    return 0;
}