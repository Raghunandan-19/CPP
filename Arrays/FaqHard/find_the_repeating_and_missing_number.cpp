#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        int missing = -1, repeating = -1;

        for (int i = 1; i <= n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    cnt++;
                }
            }

            if (cnt == 0) {
                missing = i;
            }
            else if (cnt == 2) {
                repeating = i;
            }
        }

        return {repeating, missing};
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
    for (auto &num : nums) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}