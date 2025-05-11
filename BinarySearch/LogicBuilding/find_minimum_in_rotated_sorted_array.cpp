#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &arr)  {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int minimum_element = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[low] <= arr[mid]) {
                minimum_element = min(arr[low], minimum_element);
                low = mid + 1;
            }
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