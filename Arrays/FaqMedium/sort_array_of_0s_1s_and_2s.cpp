#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to sort an array of 0s, 1s, and 2s
    void sortZeroOneTwo(vector<int> &nums) {
        int n = nums.size();
        int low = 0;  // Pointer for 0s
        int mid = 0;  // Pointer for 1s
        int high = n - 1;  // Pointer for 2s

        // Traverse the array and sort the elements
        while (mid <= high) {
            if (nums[mid] == 0) {
                // Swap the current element with the element at low pointer
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } 
            else if (nums[mid] == 1) {
                // Move the mid pointer to the next element
                mid++;
            } 
            else {
                // Swap the current element with the element at high pointer
                swap(nums[mid], nums[high]);
                high--;
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
    sol.sortZeroOneTwo(nums);
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}