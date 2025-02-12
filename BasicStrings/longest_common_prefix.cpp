#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &str) {
        int n = str.size();

        sort(str.begin(), str.end());
        
        string first = str[0];
        string last = str[n - 1];
        string ans = "";

        for (int i = 0; i < first.length(); i++) {
            if (first[i] != last[i]) {
                return ans;
            }
            ans += first[i];
        }

        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<string> str;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        str.push_back(s);
    }

    Solution sol;
    cout << sol.longestCommonPrefix(str) << "\n";

    return 0;
}