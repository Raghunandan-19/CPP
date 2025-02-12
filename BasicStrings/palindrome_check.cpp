#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool palindromeCheck(string &s) {
        int n = s.length();
        int start = 0;
        int end = n - 1;

        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};

int main() {
    string s;
    getline(cin, s);

    Solution sol;
    if (sol.palindromeCheck(s)) {
        cout << "Palindrome" << "\n";
    }
    else {
        cout << "Not a Palindrome" << "\n";
    }
    
    return 0;
}