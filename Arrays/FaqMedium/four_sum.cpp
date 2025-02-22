#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        // Sort the array to make it easier to avoid duplicates and use two pointers
        sort(nums.begin(), nums.end());
        
        // Iterate over the array with the first pointer
        for (int i = 0; i < n; i++) {
            // Skip duplicate elements for the first pointer
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Iterate over the array with the second pointer
            for (int j = i + 1; j < n; j++) {
                // Skip duplicate elements for the second pointer
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                
                // Initialize two pointers for the remaining part of the array
                int k = j + 1;
                int l = n - 1;
                
                // Use two pointers to find the remaining two elements
                while (k < l) {
                    long long sum = nums[i] + nums[j] + nums[k] + nums[l];
                    
                    if (sum == target) {
                        // If the sum matches the target, add the quadruplet to the answer
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        
                        k++;
                        l--;
                        
                        // Skip duplicate elements for the third pointer
                        while (k < l && nums[k] == nums[k - 1]) {
                            k++;
                        }
                        
                        // Skip duplicate elements for the fourth pointer
                        while (k < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    } 
                    else if (sum < target) {
                        k++;
                    } 
                    else {
                        l--;
                    }
                }
            }
        }
        
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

    int target;
    cin >> target;

    Solution sol;
    for (auto row : sol.fourSum(nums, target)) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << "\n";
    }

    return 0;
}