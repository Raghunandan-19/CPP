#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        // size of the vector
        int n = nums.size();

        // intializing zero index with -1
        int zeroIndex = -1;

        // iterating through the vector
        for (int i = 0; i < n; i++) {
            // if current element is 0
            if (nums[i] == 0) {
                // updating zero index with current index
                zeroIndex = i;
                // breaking from the loop
                break;
            }
        }

        // if no zero is present in vecor returning from the function
        if (zeroIndex == -1) return;

        // iterating from 0 index + 1 to n - 1
        for (int i = zeroIndex + 1; i < n; i++) {
            // if current element is not equal to zero  
            if (nums[i] != 0) {
                // swapping current element with zero
                swap(nums[i], nums[zeroIndex]);
                // incrementing the zero index by 1
                zeroIndex++;
            }
        }
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
    sol.moveZeroes(nums);
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}