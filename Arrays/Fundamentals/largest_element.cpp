#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int> &nums) {
        // size of vector
        int n = nums.size();

        // assigning first element of vector as the largest
        int largest = nums[0];

        // iterating through the vector
        for (int i = 1; i < n; i++) {
            //if current element is greater than largest element
            if (nums[i] > largest) {
                // update the largest element with current element
                largest = nums[i];
            }
        }

        // return the largest element
        return largest;
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
    cout << sol.largestElement(nums) << "\n";

    return 0;
}