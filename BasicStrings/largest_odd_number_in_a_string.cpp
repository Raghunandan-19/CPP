#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largeOddNum(string &s) {
        int n = s.length();

        int lastOddIndex = -1;
        for (int i = n - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1) {
                lastOddIndex = i;
                break;
            }
        }

        if (lastOddIndex == -1) return "";

        int firstNonZero = -1;
        for (int i = 0; i < n; i++) {
            if ((s[i] - '0') != 0) {
                firstNonZero = i;
                break;
            }
        }

        return s.substr(firstNonZero, lastOddIndex - firstNonZero + 1);
    }
};

int main() {
    string s;
    cin >> s;

    Solution sol;
    cout << sol.largeOddNum(s) << "\n";

    return 0;
}