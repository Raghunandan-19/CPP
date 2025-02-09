#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int reversedNumber = 0;

        while (n > 0) {
            int currentDigit = n % 10;
            n /= 10;
            reversedNumber = (reversedNumber * 10) + currentDigit;
        }

        return reversedNumber;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.reverseNumber(n) << "\n";

    return 0;
}