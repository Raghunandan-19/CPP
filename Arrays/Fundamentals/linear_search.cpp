#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int> &nums, int target) {
        // size of the vector
        int n = nums.size();

        // iterating through vector
        for (int i = 0; i < n; i++) {
            // if current element is equal to target return the current index
            if (nums[i] == target) {
                return i;
            }
        }

        // if element is not found return -1
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

    int target;
    cin >> target;

    Solution sol;
    cout << sol.linearSearch(nums, target) << "\n";

    return 0;
}