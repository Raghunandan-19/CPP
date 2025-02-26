#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int> &nums) {
        int n = nums.size();
        set<int> temp;
    
        for (int i = 0; i < n - 1; i++) {
            int cnt = 1;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] == nums[i]) {
                    cnt++;
                }
    
                    
            }
    
            if (cnt > (n / 3)) {
                temp.insert(nums[i]);
            }
        }
    
        vector<int> ans(temp.begin(), temp.end());
        return ans;
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
    for (auto &num : sol.majorityElementTwo(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}