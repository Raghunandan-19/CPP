#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool possible(vector<int> nums, int day, int m, int k) {
        int cnt = 0;
        int no_of_bouquets = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= day) {
                cnt++;
            }
            else {
                no_of_bouquets += (cnt / k);
                cnt = 0;
            }
        }

        no_of_bouquets += (cnt / k);

        return (no_of_bouquets >= m);
    }
public:
    int roseGarden(vector<int> nums, int k, int m) {
        int n = nums.size();

        long long val = (k * 1ll) * (m * 1ll);
        if (val > n) return -1;

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        for (int i = mini; i <= maxi; i++) {
            if (possible(nums, i, m, k)) {
                return i;
            }
        }

        return -1;
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

    int m;
    cin >> m;

    Solution sol;
    cout << sol.roseGarden(nums, k, m) << "\n";

    return 0;
}