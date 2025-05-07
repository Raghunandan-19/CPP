#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int> &nums, int k) {
        // size of the vector
        int n = nums.size();

        // map to store prefix sum and count of prefix sum
        map<int, int> mpp;

        // putting <0, 1> in map as initial prefix sum
        mpp[0] = 1;

        // variables to store prefix sum and count of prefix sum
        int prefix_sum = 0;
        int count = 0;
        
        // iterating in the vector 
        for (int i = 0; i < n; i++) {
            // adding element to prefix sum
            prefix_sum += nums[i];
            
            // calculating the value to remove (prefix_sum - k)
            int sum_to_remove = prefix_sum - k;

            // add the number of subarrays with the sum to be removed 
            count += mpp[sum_to_remove];
            
            // update the count of current prefix sum in the map
            mpp[prefix_sum]++;
        }

        // return the count of subarrays with sum = k
        return count;
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
    cout << sol.subarraySum(nums, k) << "\n";

    return 0;
}