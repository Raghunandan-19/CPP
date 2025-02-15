#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size();
        int i = 0;

        for (int j = i + 1; j < n; j++) {
            if (nums[j] != nums[i]) {
                nums[i + 1] = nums[j];
                i++;
            }
        }

        return (i + 1);
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
    int removedDuplicate = sol.removeDuplicates(nums);
    for (int i = 0; i < removedDuplicate; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";
    
    return 0;
}