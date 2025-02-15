#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        // size of the vector
        int n = nums.size();
        // intializing i with 0
        int i = 0;

        // iterating from i + 1 to n - 1 index
        for (int j = i + 1; j < n; j++) {
            // if element at jth index is not equal to current element
            if (nums[j] != nums[i]) {
                // updating element at i + 1 with current element
                nums[i + 1] = nums[j];
                // incrementing i by 1
                i++;
            }
        }

        // returning the number of unique elements
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