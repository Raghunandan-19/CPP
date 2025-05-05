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
        
        if (n == 0) {
            return 0;
        }

        int longest_consecutive = 1;

        for (int i = 0; i < n; i++) {
            int target = nums[i];
            int count = 1;

            while (linearSearch(nums, target + 1) == true) {
                target++;
                count++;
            }

            longest_consecutive = max(count, longest_consecutive);
        }

        return longest_consecutive;
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