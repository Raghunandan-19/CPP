#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        
        // Calculate sum of first n natural numbers: 1+2+...+n
        long long sN = (n * (n + 1)) / 2;
        // Calculate sum of squares of first n natural numbers: 1²+2²+...+n²
        long long s2N = (n * (n + 1) * (2 * n + 1)) / 6;
        
        // Calculate actual sum and sum of squares from the array
        long long s = 0, s2 = 0;
        for (int i = 0; i < n; i++) {
            s += nums[i];
            s2 += ((long long) (nums[i]) * (long long) (nums[i]));
        }
        
        // If x is repeating and y is missing number:
        // s - sN = x - y (difference of sums)
        long long val1 = s - sN;
        
        // s2 - s2N = x² - y² = (x-y)(x+y)
        long long val2 = s2 - s2N;
        // val2/val1 = (x+y)
        val2 = val2 / val1;
        
        // Solving for x and y using the two equations
        long long x = (val1 + val2) / 2;    // Repeating number
        long long y = x - val1;             // Missing number
        
        return {(int) x, (int) y};
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
    for (auto &num : sol.findMissingRepeatingNumbers(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}