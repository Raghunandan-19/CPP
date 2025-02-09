#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigits(int n) {
        int countOdd = 0;
        
        while (n > 0) {
            int currentDigit = n % 10;
            if (currentDigit % 2 == 1) {
                countOdd++;
            }
            n /= 10;
        }

        return countOdd;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.countOddDigits(n) << "\n";

    return 0;
}