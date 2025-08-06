#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
        int n1 = a.size();
        int n2 = b.size();

        // Ensure that 'a' is the smaller array for binary search efficiency
        if (n1 > n2) {
            return kthElement(b, a, k);
        }

        int left = k;
        // Set binary search bounds for the number of elements to take from 'a'
        int low = max(0, k - n2);
        int high = min(k, n1);

        while (low <= high) {
            int mid1 = low + (high - low) / 2; // Elements taken from 'a'
            int mid2 = left - mid1;            // Elements taken from 'b'

            // Get left and right partition values, handle out-of-bounds with INT_MIN/INT_MAX
            int l1 = (mid1 > 0) ? a[mid1 - 1] : INT_MIN;
            int l2 = (mid2 > 0) ? b[mid2 - 1] : INT_MIN;
            int r1 = (mid1 < n1) ? a[mid1] : INT_MAX;
            int r2 = (mid2 < n2) ? b[mid2] : INT_MAX;

            // Check if valid partition is found
            if (l1 <= r2 && l2 <= r1) {
                // kth element is the max of left partition
                return max(l1, l2);
            }
            else if (l1 > r2) {
                // Too many elements taken from 'a', move left
                high = mid1 - 1;
            }
            else {
                // Too few elements taken from 'a', move right
                low = mid1 + 1;
            }
        }

        // If no valid partition is found
        return -1;
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    int k;
    cin >> k;
    
    Solution sol;
    cout << sol.kthElement(a, b, k) << "\n";

    return 0;
}