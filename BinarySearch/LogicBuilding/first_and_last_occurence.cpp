#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    int firstOccurence(vector<int> &nums, int x) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                return i;
            }
        }

        return -1;
    }

    int lastOccurrence(vector<int> &nums, int x) {
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == x) {
                return i;
            }
        }

        return -1;
    }
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        return {firstOccurence(nums, target), lastOccurrence(nums, target)};
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

    int target;
    cin >> target;

    Solution sol;
    for (auto &num : sol.searchRange(nums, target)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}