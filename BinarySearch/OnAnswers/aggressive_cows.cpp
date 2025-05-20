#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool canWePlace(vector<int> &nums, int distance, int cows) {
        int n = nums.size();
        int cnt_cows = 1;
        int last_cow = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] - last_cow >= distance) {
                cnt_cows++;
                last_cow = nums[i];
            }

            if (cnt_cows >= cows) return true;
        }

        return false;
    }
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        
        int limit = nums[n - 1] - nums[0];

        for (int i = 0; i <= limit; i++) {
            if (canWePlace(nums, i, k) == false) {
                return (i - 1);
            }
        }

        return limit;
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
    cout << sol.aggressiveCows(nums, k) << "\n";

    return 0;
}