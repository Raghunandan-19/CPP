#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int n = n1 + n2;

        // Ensure arr1 is the smaller array for binary search efficiency
        if (n1 > n2) return median(arr2, arr1);
        
        int low = 0;
        int high = n1;

        // Number of elements in left partition
        int left = (n1 + n2 + 1) / 2;

        while (low <= high) {
            // Partition arr1
            int mid1 = low + (high - low) / 2;
            
            // Partition arr2
            int mid2 = left - mid1;

            // Get border elements for comparison, handle out-of-bounds
            int l1 = (mid1 > 0) ? arr1[mid1 - 1] : INT_MIN;
            int r1 = (mid1 < n1) ? arr1[mid1] : INT_MAX;
            int l2 = (mid2 > 0) ? arr2[mid2 - 1] : INT_MIN;
            int r2 = (mid2 < n2) ? arr2[mid2] : INT_MAX;

            // Check if correct partition is found
            if (l1 <= r2 && l2 <= r1) {
                // Odd total length: median is max of left elements
                if (n % 2 == 1) return max(l1, l2);
                // Even total length: median is average of max left and min right
                else return (max(l1, l2) + min(r1, r2)) / 2.0;
            }
            // Move partition in arr1 to left
            else if (l1 > r2) {
                high = mid1 - 1;
            }
            // Move partition in arr1 to right
            else {
                low = mid1 + 1;
            }
        }

        // If input is invalid or arrays are empty
        return 0;
    }
};

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> arr1(n1), arr2(n2);

    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    Solution sol;
    cout << sol.median(arr1, arr2) << "\n";

    return 0;
}