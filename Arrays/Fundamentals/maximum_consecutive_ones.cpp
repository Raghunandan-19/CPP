#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        // size of the vector
        int n = nums.size();
        // variable to count number of consecutive ones
        int consecutiveOnes = 0;
        // variable to store maximum consecutive ones
        int maxConsecutiveOnes = 0;

        // iterating through the vector
        for (int i = 0; i < n; i++) {
            // if current element is equal to 1
            if (nums[i] == 1) {
                // increase count of consecutive ones by one
                consecutiveOnes++;
                /* update max consecutive ones with the maximum of 
                consecutive ones and max consecutive ones */
                maxConsecutiveOnes = max(consecutiveOnes, maxConsecutiveOnes);
            }
            // if current element is not equal to 1
            else {
                // mark the consecutive ones as 0
                consecutiveOnes = 0;
            }
        }

        // return the max consecutive ones
        return maxConsecutiveOnes;
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
    cout << sol.findMaxConsecutiveOnes(nums) << "\n";

    return 0;
}