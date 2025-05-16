#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long floorSqrt(long long n)  {
        // Initialize the search range
        long long low = 0;
        long long high = n;

        // Binary search to find the floor of the square root
        while (low <= high) {
            // Calculate the middle value to avoid overflow
            long long mid = low + (high - low) / 2;\

            // Compute mid square
            long long val = mid * mid;

            // If mid*mid is less than or equal to n, move to the right half
            if (val <= n) {
                low = mid + 1;
            }
            // If mid*mid is greater than n, move to the left half
            else {
                high = mid - 1;
            }
        }
        
        // high will be the floor of the square root of n
        return high;
    }
};

int main() {
    long long n;
    cin >> n;

    Solution sol;
    cout << sol.floorSqrt(n) << "\n";

    return 0;
}