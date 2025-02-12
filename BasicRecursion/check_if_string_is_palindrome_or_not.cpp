#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPalindrome(int i, int j, string &s) {
        if (i >= j) {
            return true;
        }

        if (s[i] != s[j]) {
            return false;
        }

        return isPalindrome(i + 1, j - 1, s);
    }
public:
    bool palindromeCheck(string &s) {
        return isPalindrome(0, s.length() - 1, s);
    }
};

int main() {
    string s;
    cin >> s;

    Solution sol;
    if (sol.palindromeCheck(s)) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}