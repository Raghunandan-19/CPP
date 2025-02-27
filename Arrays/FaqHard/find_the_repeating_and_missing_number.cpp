#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        int missing = -1, repeating = -1;
        int hash[n + 1] = {0};

        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (hash[i] == 0) {
                missing = i;
            }
            else if (hash[i] == 2) {
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