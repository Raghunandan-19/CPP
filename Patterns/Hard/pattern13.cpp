#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print(int n) {
        int start = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << start;
                start++;
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