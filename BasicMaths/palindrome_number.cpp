#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int reverseNumber(int n) {
        int reversedNumber = 0;

        while (n > 0) {
            int currentDigit = n % 10;
            n /= 10;
            reversedNumber = (reversedNumber * 10) + currentDigit;
        }

        return reversedNumber;
    }
public:
    bool isPalindrome(int n) {
        return (reverseNumber(n) == n);
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    if (sol.isPalindrome(n) == 1) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}