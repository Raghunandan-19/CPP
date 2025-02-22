#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        int n = nums.size();
        vector<vector<int>> triplets;
        
        // Sort the array to make it easier to avoid duplicates and use two pointers
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            // Skip the same element to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int j = i + 1; // Start the second pointer just after the current element
            int k = n - 1; // Start the third pointer at the end of the array
            
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                
                if (sum < 0) {
                    j++; // Move the second pointer to the right to increase the sum
                } 
                else if (sum > 0) {
                    k--; // Move the third pointer to the left to decrease the sum
                } 
                else {
                    // Found a triplet with sum zero
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    triplets.push_back(temp);
                    j++;
                    k--;

                    // Skip the same elements to avoid duplicate triplets
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }

                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            } 
        }

        return triplets;
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
    for (auto row : sol.threeSum(nums)) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << "\n";
    }

    return 0;
}