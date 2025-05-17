#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    long long power(int base, int exp, int M) {
        long long result = 1;

        // Multiply base 'exp' times to compute base^exp
        for (int i = 1; i <= exp; i++) {
            result *= base;

            // Early exit if result exceeds M to avoid unnecessary computation
            if (result > M) {
                break;
            }
        }

        // Return the computed power (or early exit value)
        return result;
    }
public:
    int nthRoot(int N, int M) {
        // Initialize the search range for the Nth root
        int low = 1;
        int high = M;

        // Binary search to find the Nth root of M
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Compute mid^N
            long long val = power(mid, N, M); 

            if (val == M) {
                // Found the Nth root
                return mid;
            }
            else if (val < M) {
                // mid^N is less than M, try higher values
                low = mid + 1;
            }
            else {
                // mid^N is greater than M, try lower values
                high = mid - 1;
            }
        }

        // If no integer Nth root exists, return -1
        return -1;
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    Solution sol;
    cout << sol.nthRoot(N, M) << "\n";

    return 0;
}