#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string &s, string &goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string doubledS = s + s;
        
        return doubledS.find(goal) != string::npos;
    }
};

int main() {
    string s, goal;
    cin >> s >> goal;

    Solution sol;
    if (sol.rotateString(s, goal)) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}