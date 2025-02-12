#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char> &s) {
        int n = s.size();
        int start = 0;
        int end = n - 1;

        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};

int main() {
    int n;
    cin >> n;
    vector<char> s;

    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        s.push_back(x);
    }

    Solution sol;
    sol.reverseString(s);
    for (auto it : s) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}