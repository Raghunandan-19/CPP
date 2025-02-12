#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num < 10) {
            return num;
        }

        int sum = 0;
        while (num > 0) {
            int currentDigit = num % 10;
            sum += currentDigit;
            num /= 10;
        }

        return addDigits(sum);
    }
};

int main() {
    int num;
    cin >> num;

    Solution sol;
    cout << sol.addDigits(num) << "\n";

    return 0;
}