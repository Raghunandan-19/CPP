#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &nums) {
        int n = nums.size();
        int el; // Variable to store the potential majority element
        int cnt = 0; // Counter to track the frequency of the potential majority element

        // Boyer-Moore Voting Algorithm to find the candidate for majority element
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i]; // Set the current element as the potential majority element
            }
            else if (el == nums[i]) {
                cnt++; // Increment the counter if the current element matches the potential majority element
            }
            else {
                cnt--; // Decrement the counter if the current element does not match the potential majority element
            }
        }

        int cnt1 = 0; // Counter to verify if the candidate is actually the majority element
        for (int i = 0; i < n; i++) {
            if (nums[i] == el) {
                cnt1++; // Count the occurrences of the candidate element
            }
        }

        // Return the candidate if it is the majority element, otherwise return -1
        return cnt1 > (n / 2) ? el : -1;
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
    cout << sol.majorityElement(nums) << "\n";

    return 0;
}