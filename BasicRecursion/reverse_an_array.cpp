#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void reverse(int i, int j, vector<int> &nums) {
        if (i >= j) {
            return;
        }

        swap(nums[i], nums[j]);

        reverse(i + 1, j - 1, nums);
    }   
public:
    vector<int> reverseArray(vector<int> &nums) {
        reverse(0, nums.size() - 1, nums);
        return nums;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    Solution sol;
    for (auto it : sol.reverseArray(nums)) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}