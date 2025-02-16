#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        // variables to store xor
        int xor1 = 0;
        int xor2 = 0;

        // iterating thorugh the vector
        for (int i = 0; i < nums.size(); i++) {
            // xor1 calculating xor of natural numbers
            xor1 ^= (i + 1);
            // xor2 calculating xor of array elements
            xor2 ^= nums[i];
        }

        // returning the xor of xor1 and xor2
        return (xor1 ^ xor2);
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
    cout << sol.missingNumber(nums) << "\n";

    return 0;
}