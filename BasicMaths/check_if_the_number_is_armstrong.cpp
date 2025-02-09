#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int copyN = n;
        int sum = 0;
        int exponent = (int) (log10(n) + 1);

        while (copyN > 0) {
            int currentDigit = copyN % 10;
            sum += pow(currentDigit, exponent);
            copyN /= 10;
        }

        return (sum == n);
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    if (sol.isArmstrong(n) == 1) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}