#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int> &nums) {
        // size of the vector
        int n = nums.size();
        // initializing largest and second largest element with INT_MIN
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        // iterating through vector
        for (int i = 0; i < n; i++) {
            // if current element is greater than largest
            if (nums[i] > largest) {
                /* update the second largest element with largest element
                and largest element with current element */
                secondLargest = largest;
                largest = nums[i];
            }
            /* if current element is greater than second largest and not 
            equal to largest element */
            else if (nums[i] > secondLargest && nums[i] != largest) {
                // update the second largest element with current element
                secondLargest = nums[i];
            }
        }

        /* If second largest element is equal to INT_MIN return -1 else 
        return second largest element */
        return secondLargest == INT_MIN ? -1 : secondLargest;
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
    cout << sol.secondLargestElement(nums) << "\n";

    return 0;
}