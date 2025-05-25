#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int> &arr) {
        int n = arr.size();
        
        // If there is only one element, it's the peak
        if (n == 1) return 0;
        // Check if the first element is a peak
        if (arr[0] > arr[1]) return 0;
        // Check if the last element is a peak
        if (arr[n - 2] < arr[n - 1]) return n - 1;

        int low = 1;
        int high = n - 2;

        // Binary search for a peak element
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if mid is a peak
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            // If the left neighbor is less, move right
            else if (arr[mid - 1] < arr[mid]) {
                low = mid + 1;
            }
            // Otherwise, move left
            else {
                high = mid - 1;
            }
        }

        // No peak found (should not happen for valid input)
        return -1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    Solution sol;
    cout << sol.findPeakElement(arr) << "\n";

    return 0;
}