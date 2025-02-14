#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int> &nums) {
        // size of the vector
        int n = nums.size();

        // assign the rotate element by 0th element
        int rotateElement = nums[0];

        // iterate through the vector
        for (int i = 1; i < n; i++) {
            // update the previous element with the current element
            nums[i - 1] = nums[i];
        }

        // update the last element by the rotate element
        nums[n - 1] = rotateElement;
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
    sol.rotateArrayByOne(nums);
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}