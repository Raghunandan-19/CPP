#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void reverse(int i, int j, vector<char> &s) {
        if (i >= j) {
            return;
        }

        swap(s[i], s[j]);

        reverse(i + 1, j - 1, s);
    }
public:
    vector<char> reverseString(vector<char> &s) {
        reverse(0, s.size() - 1, s);
        return s;
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
    for (auto it : sol.reverseString(s)) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}