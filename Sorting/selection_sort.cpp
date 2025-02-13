#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int> &nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int mini = i;

            for (int j = i; j < n; j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }

            swap(nums[mini], nums[i]);
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
    for (auto num : sol.selectionSort(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}