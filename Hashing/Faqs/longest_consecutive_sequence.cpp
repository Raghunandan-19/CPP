#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool linearSearch(vector<int> &nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                return true;
            }
        }

        return false;
    }
public:
    int longestConsecutive(vector<int> &nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int longest = 1;
        int current_cnt = 0;
        int last_smaller = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] - 1 == last_smaller) {
                current_cnt = current_cnt + 1;
                last_smaller = nums[i];
            }
            else if (nums[i] != last_smaller) {
                current_cnt = 1;
                last_smaller = nums[i];
            }

            longest = max(longest, current_cnt);
        }

        return longest;
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
    cout << sol.longestConsecutive(nums) << "\n";

    return 0;
}