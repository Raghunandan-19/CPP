#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print(int n) {
        for (int i = 0; i < n; i++) {
            // space
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            // star
            for (int j = 0; j < (n * 2) - (2 * i + 1); j++) {
                cout << "*";
            }

            // space
            for (int j = 0; j < i; j++) {
                cout << " ";
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