#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = n - 1; i >= 1; i--) {
            bool didSwap = false;
            
            for (int j = 0; j < i; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    didSwap = true;
                }
            }

            if (didSwap == false) {
                break;
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
    for (auto num : sol.bubbleSort(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}