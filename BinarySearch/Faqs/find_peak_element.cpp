#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int> &arr) {
        int n = arr.size();
        
        if (arr[0] > arr[1]) return 0;
        if (arr[n - 2] < arr[n - 1]) return n - 1;

        for (int i = 1; i < n - 1; i++) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                return i;
            }
        }

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