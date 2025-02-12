#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nNumbersSum(int n) {
        if (n <= 1) {
            return n;
        }

        return n + nNumbersSum(n - 1);
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.nNumbersSum(n) << "\n";

    return 0;
}