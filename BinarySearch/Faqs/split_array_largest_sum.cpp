#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int countPartitions(vector<int> &a, int maxSum) {
        int n = a.size();
        int partitions = 1; // Start with one partition
        int sum = 0;        // Current sum of the partition

        for (int i = 0; i < n; i++) {
            // If adding a[i] doesn't exceed maxSum, add it to current partition
            if (sum + a[i] <= maxSum) {
                sum += a[i];
            }
            else {
                // Otherwise, start a new partition
                partitions++;
                sum = a[i];
            }
        }

        // Return the total number of partitions formed
        return partitions;
    }
public:
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        int n = a.size();
        int low = INT_MIN; // Minimum possible largest sum (at least the max element)
        int high = 0;      // Maximum possible largest sum (sum of all elements)

        // Find the max element and total sum
        for (int i = 0; i < n; i++) {
            low = max(low, a[i]);
            high += a[i];
        }

        // Binary search for the minimal largest sum
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Number of partitions needed with max sum 'mid'
            int partitions = countPartitions(a, mid);

            if (partitions > k) {
                // Too many partitions, need to increase allowed sum
                low = mid + 1;
            }
            else {
                // Can try a smaller allowed sum
                high = mid - 1;
            }
        }

        return low; // The minimal largest sum for k partitions
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int k;
    cin >> k;

    Solution sol;
    cout << sol.largestSubarraySumMinimized(a, k) << "\n";

    return 0;
}