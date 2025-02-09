#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print(int n) {
        char ch = 'A' + n - 1;
        for (int i = 0; i < n; i++) {
            for (char j = ch - i; j <= ch; j++) {
                cout << j;
            }
            cout << "\n";
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    sol.print(n);

    return 0;
}