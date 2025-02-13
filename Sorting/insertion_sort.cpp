#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int> &nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int j = i;
            while (j > 0 && nums[j - 1] > nums[j]) {
                swap(nums[j], nums[j - 1]);
                j--;
            }
        }

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
    for (auto num : sol.insertionSort(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}