#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    long long calculateTotalHours(vector<int> &nums, int hour) {
        long long total_hours = 0;

        for (int i = 0; i < nums.size(); i++) {
            total_hours += ceil((double) (nums[i]) / (double) (hour));
        }

        return total_hours;
    }
public:
    int minimumRateToEatBananas(vector<int> &nums, int h) {
        int n = nums.size();
        int maximum_element = *(max_element(nums.begin(), nums.end()));

        for (int hour = 1; hour <= maximum_element; hour++) {
            long long required_time = calculateTotalHours(nums, hour);

            if (required_time <= h) {
                return hour;
            }
        }
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

    int h;
    cin >> h;

    Solution sol;
    cout << sol.minimumRateToEatBananas(nums, h) << "\n";

    return 0;
}