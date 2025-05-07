#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        
        // Map to store the frequency of prefix XORs
        map<int, int> mpp;

        // Initialize with 0 XOR having frequency 1
        mpp[0] = 1; 

        // To store the cumulative XOR and count of number of subarrays with XOR equal to k
        int prefix_xor = 0; 
        int subarray_count = 0;

        for (int i = 0; i < n; i++) {
            // Update the prefix XOR with the current element
            prefix_xor ^= nums[i]; 

            // Calculate the XOR that needs to be removed to get XOR k
            int xor_to_remove = prefix_xor ^ k; 

            // Add the frequency of the required XOR to the count
            subarray_count += mpp[xor_to_remove]; 

            // Update the frequency of the current prefix XOR
            mpp[prefix_xor]++; 
        }

        // Return the total count of subarrays with XOR k
        return subarray_count; 
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
    cout << sol.subarraysWithXorK(nums, k) << "\n";

    return 0;
}