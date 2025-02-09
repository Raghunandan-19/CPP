#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print(int n) {
        for (int i = 0; i < (2 * n - 1); i++) {
            for (int j = 0; j < (2 * n - 1); j++) {
                int top = i, bottom = j;
                int left = (2 * n - 2) - i, right = (2 * n - 2) - j;

                cout << (n - min(min(top, bottom), min(left, right)));
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