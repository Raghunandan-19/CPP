#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int n = nums.size();
        int maxProd = INT_MIN; // Initialize max product to the smallest possible integer
        int prefix = 1; // Initialize prefix product
        int suffix = 1; // Initialize suffix product

        // Traverse the array from both ends
        for (int i = 0; i < n; i++) {
            // Reset prefix and suffix if they become zero
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;
            
            // Calculate prefix product
            prefix *= nums[i];
            // Calculate suffix product
            suffix *= nums[n - i - 1];
            
            // Update max product with the maximum of current prefix and suffix products
            maxProd = max(maxProd, max(prefix, suffix));
        }

        return maxProd; // Return the maximum product found
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
    cout << sol.maxProduct(nums) << "\n";

    return 0;
}