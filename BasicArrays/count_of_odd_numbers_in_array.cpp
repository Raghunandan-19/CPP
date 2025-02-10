#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOdd(int arr[], int n) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    cout << sol.countOdd(arr, n) << "\n";

    return 0;
}