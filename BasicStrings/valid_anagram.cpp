#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool anagramStrings(string &s, string &t) {
        if (s.length() != t.length()) {
            return false;
        }

        int freqMap[26] = {0};
        
        for (int i = 0; i < s.length(); i++) {
            freqMap[s[i] - 'a']++;
            freqMap[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freqMap[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    string s, t;
    cin >> s >> t;

    Solution sol;
    if (sol.anagramStrings(s, t)) {
        cout << "Anagram" << "\n";
    }
    else {
        cout << "Not anagram" << "\n";
    }

    return 0;
}