#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Merge two sorted subarrays and count inversions
    long long int merge(vector<int> &nums, int low, int mid, int high) {
        vector<int> temp; // Temporary array for merging
        int left = low, right = mid + 1;
        int cnt = 0; // Counter for inversions

        // Compare elements from both subarrays and merge them
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                // No inversion, just add left element
                temp.push_back(nums[left]);
                left++;
            }
            else {
                // Inversion found - all elements from left to mid are greater than nums[right]
                temp.push_back(nums[right]);
                cnt += (mid - left + 1); // Count inversions
                right++;
            }
        }

        // Add remaining elements from left subarray
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        // Add remaining elements from right subarray
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        // Copy merged elements back to original array
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }

        return cnt; // Return inversion count
    }

    // Recursive merge sort function that counts inversions
    long long int mergeSort(vector<int> &nums, int low, int high) {
        int cnt = 0;
        if (low >= high) {
            return cnt; // Base case: single element has no inversions
        }
        
        // Divide the array into two halves
        int mid = low + (high - low) / 2;
        
        // Count inversions in left half
        cnt += mergeSort(nums, low, mid);
        
        // Count inversions in right half
        cnt += mergeSort(nums, mid + 1, high);
        
        // Count split inversions and merge the two halves
        cnt += merge(nums, low, mid, high);
        
        return cnt;
    }

public:
    // Count the number of inversions in the array
    // An inversion is a pair (nums[i], nums[j]) where i < j and nums[i] > nums[j]
    long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();
        return mergeSort(nums, 0, nums.size() - 1);
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
    cout << sol.numberOfInversions(nums) << "\n";

    return 0;
}