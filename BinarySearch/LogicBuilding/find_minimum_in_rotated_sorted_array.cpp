#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &arr)  {
        int n = arr.size();
        int mini = arr[0];

        for (int i = 0; i < n; i++) {
            if (arr[i] < mini) {
                mini = arr[i];
            }
        }

        return mini;
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