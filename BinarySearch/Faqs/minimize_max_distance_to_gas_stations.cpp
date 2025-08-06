#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int gasStationsRequired(long double distance, vector<int> &arr) {
        int n = arr.size(); 
        int cnt = 0;
        
        // Iterate through each pair of consecutive gas stations
        for (int i = 1; i < n; i++) {
            // Calculate how many additional stations are needed between arr[i-1] and arr[i]
            int numberInBetween = ((arr[i] - arr[i - 1]) / distance);
            
            // If the distance divides evenly, we don't need a station at the end point
            if ((arr[i] - arr[i - 1]) == (distance * numberInBetween)) {
                numberInBetween--;
            }
            
            cnt += numberInBetween; // Accumulate the total number of required stations
        }

        return cnt; // Return the total number of additional stations needed
    }
public:
    long double minimizeMaxDistance(vector<int> &arr, int k) {
        int n = arr.size();
        long double low = 0;
        long double high = 0;

        // Find the maximum initial distance between consecutive stations
        for (int i = 0; i < n - 1; i++) {
            high = max(high, (long double)(arr[i + 1] - arr[i]));
        }

        long double diff = 1e-6; // Precision for binary search

        // Binary search to minimize the maximum distance
        while (high - low > diff) {
            long double mid = low + (high - low) / 2;
            int cnt = gasStationsRequired(mid, arr);

            // If more stations are needed than allowed, increase the minimum distance
            if (cnt > k) {
                low = mid;
            }
            // Otherwise, try to minimize the distance further
            else {
                high = mid;
            }
        }

        return high; // Return the minimized maximum distance
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    
    Solution sol;
    cout << sol.minimizeMaxDistance(arr, k) << "\n";

    return 0;
}