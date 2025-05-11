#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &arr)  {
        int n = arr.size();
        
        // Initialize the search boundaries
        int low = 0;
        int high = n - 1;

        // Initialize minimum_element to maximum possible integer value
        int minimum_element = INT_MAX;

        // Binary search to find the minimum element in rotated sorted array
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If the subarray is already sorted, the leftmost element is the minimum
            if (arr[low] <= arr[high]) {
                minimum_element = min(arr[low], minimum_element);
                break;
            }

            // If left part is sorted, minimum must be in right part or at low
            if (arr[low] <= arr[mid]) {
                minimum_element = min(arr[low], minimum_element);
                low = mid + 1;
            }
            // Otherwise, right part is sorted, minimum must be in left part or at mid
            else {
                minimum_element = min(arr[mid], minimum_element);
                high = mid - 1;
            }
        }

        return minimum_element;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    Solution sol;
    cout << sol.findMin(arr) << "\n";

    return 0;
}