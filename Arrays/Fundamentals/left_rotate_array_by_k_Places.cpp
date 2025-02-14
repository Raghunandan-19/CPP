#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void roatateArray(vector<int> &nums, int k) {
        // size of the vector
        int n = nums.size();

        // modulus k by n to avoid unnecessary rotation
        k %= n;

        // reversing from 0th index to k - 1 index
        reverse(nums.begin(), nums.begin() + k);
        // reversing from kth index to last index
        reverse(nums.begin() + k, nums.end());
        // reversing the whole vector
        reverse(nums.begin(), nums.end());
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
    sol.roatateArray(nums, k);
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}