#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;

        while (n > 0) {
            n /= 10;
            count++;
        }

        return count;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.countDigit(n) << "\n";

    return 0;
}